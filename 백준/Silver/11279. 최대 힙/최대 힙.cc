#include <iostream>

using namespace std;

int a[100001];
int n;
int index = -1;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void push(int num){
	a[++index] = num;
	int c=index;
	while(c!=0){
		int root = (c-1)/2;
		if(a[root] < a[c]) swap(a[root], a[c]);
		c = root;
	}
}

void pop(){
	cout << a[0]<<'\n';
	swap(a[0], a[index]);
	int root = 0;
	int c=1;
	while(c<index){
		c = 2*root+1;
		if(c+1<index&& a[c]<a[c+1]) c++;
		if(c<index&& a[root] < a[c]) swap(a[root], a[c]);
		root = c;
	}
	index--;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int num;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		if(num==0){
			if(index!=-1) pop();
			else cout << "0\n";
		}
		else push(num);
	}
	return 0;
}