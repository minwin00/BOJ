#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
vector<long long int> num;
vector<long long int> tree;
int s;

void init(){
	for (int i=0; i<n; i++){
		tree[s+i] = num[i];
	}
	for (int i=s-1; i>0; i--){//node는 1번부터 
		tree[i] = tree[i*2] + tree[i*2+1];
	}
}

long long int query(int left, int right, int node, int query_left, int query_right){
	if (query_right < left || query_left > right){
		return 0;
	}
	else if (query_left <= left && query_right >= right){
		return tree[node];
	}
	else{
		int mid = (left+right)/2;
		return query(left, mid, node*2, query_left, query_right) + query(mid+1, right, node*2+1, query_left, query_right);
	}
}

void update(int left, int right, int node, int target, long long int diff){
	if (right<target || target < left){
		return;
	}
	else{
		tree[node] += diff;
		if (left != right) {
			int mid = (left+right)/2;
			update(left, mid, node*2, target, diff);
			update(mid+1, right, node*2 +1, target, diff);
		}
	}
}

long long int query_bo(int query_left, int query_right){
	int left = s+query_left -1;
	int right = s+query_right-1;
	long long int sum=0;
	
	while (left <= right){
		if(left%2==1){
			sum += tree[left++];
		}
		if (right%2==0){
			sum += tree[right--];
		}
		left/=2;
		right/=2;
	}
	return sum;
}

void update_bo(int target, long long int value){
	int node=s+target-1;
	tree[node]=value;
	node/=2;
	while (node>0){
		tree[node] = tree[node*2]+tree[node*2+1];
		node/=2;
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
//	long long int* a = new long long int[l];
	long long int tt;
	int a, b;
	long long int c;
	long long int diff;
	
	cin >> n >> m >> k;
	s = 1;
	while (s < n){
		s*=2;
	}
	for (int i=0; i<n; i++){
		cin >> tt;
		num.push_back(tt);
	}		
	for (int i=0; i<2*s+1; i++){
		tree.push_back(0);
	}
	init();
	for (int i=0; i<m+k; i++){
		cin >> a>> b>> c;
		if(a==1) {
			diff = c-tree[s-1+b];
			update(1, s, 1, b, diff);
		}
		else if (a==2) cout << query(1, s, 1, b, int(c)) << "\n";
	}
	return 0;
}