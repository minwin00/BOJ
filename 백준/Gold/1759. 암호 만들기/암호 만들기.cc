#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
char a[15];
char b[15];

void swap(int i, int j){
	char temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void heap(){
	for(int i=1; i<m; i++){
		int c=i;
		while(c!=0){
			int root = (c-1)/2;
			if(a[root] <a[c]) swap(root, c);
			c = root;
		}
	}
	for(int i=m-1; i>0; i--){
		swap(0, i);
		int root=0;
		int c=1;
		while(c<i){
			c = root*2+1;
			if(c+1<i&&a[c] <a[c+1]) c++;
			if(c<i&& a[root] < a[c]) swap(root, c);
			root = c;
		}
		
	}
}


void find(int start, int level){
	if(level == n) {
		int cnt=0;
		for(int j=0; j<n; j++){
			if(b[j] =='a'|| b[j] =='e'||b[j] =='i'||b[j] =='o'||b[j]=='u'){
				cnt++;
			}
		}
		if(cnt>=1&&(n-cnt)>=2){
			for(int j=0; j<n; j++){
				cout << b[j];
			}
			cout << '\n';	
		}
		return;
	}
	for(int i=start; i<m; i++){
		b[level] = a[i];
		find(i+1, level+1);
	}
	return;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	for(int i=0; i<m; i++){
		cin >> a[i];
	}
	heap();
	find(0,0);
	return 0;
}