#include <iostream>
using namespace std;

int main(void){
	int n, m;
	int t;
	int s[101] ={0,};
	int a[101] ={0,};
	cin >> n >> m;
	for (int i=0; i<m; i++){
		cin >> a[i];
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> t;
			if (t==a[i]) s[j+1]++;
			else s[a[i]]++;
		}
	}
	for (int i=0; i<n; i++){
		cout << s[i+1] << "\n";
	}
	return 0;
}