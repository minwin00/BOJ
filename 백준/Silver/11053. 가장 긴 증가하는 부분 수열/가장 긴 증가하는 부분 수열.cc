#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int a[1001];
int d[1001];
int result = 1;

void cal(){
	
	for(int i=1; i<N; i++){
		int max_num = 1;
		for(int j=0; j<i; j++){
			if(a[i] >a[j]){
				max_num = max(max_num, d[j]);
				d[i] = max_num + 1;
				result = max(result, d[i]);
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int num;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> num;
		a[i] = num;
		d[i] = 1;
	}
	cal();
	cout << result;
	return 0;
}