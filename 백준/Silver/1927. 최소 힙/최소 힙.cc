#include <iostream>
#include <vector>

using namespace std;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int heap[100001];
	int n;
	int num;
	int index = -1;
	
	cin >> n;
	for(int l=0; l<n; l++){
		cin >> num;
		if(num){
			heap[++index] = num;
			int c=index;
			while(c!=0){
				int root = (c-1)/2;
				if(heap[root] > heap[c]) swap(heap[root], heap[c]);
				c = root;
			}
		}
		else{
			if(index==-1){
				cout << "0\n";
				continue;
			}
			swap(heap[0], heap[index]);
			cout << heap[index]<<'\n';
			int root = 0;
			int c = 1;
			while(c<index){
				c = root*2+1;
				if(c+1<index && heap[c] > heap[c+1]) c++;
				if(c<index && heap[root] > heap[c]) swap(heap[root], heap[c]);
				root = c;
			}
			index--;
		}
	}
	return 0;
}