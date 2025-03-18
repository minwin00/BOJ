#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n, m;
	int t;
	int r = 0;
	int a[101]={0,};
	vector<vector<int>> v(101);
	cin >> n >> m;
	for (int i=0; i<m; i++){
		cin >> a[i];
		a[i]= a[i] -1;
	}
	for (int i=0; i<n;i++){
		for (int j=0; j<n; j++){
			cin >> t;
			v[i].push_back(t);
		}
	}
	for (int i=0; i<m-1; i++){
		r += v[a[i]][a[i+1]];
	}
	cout << r;
	return 0;
}