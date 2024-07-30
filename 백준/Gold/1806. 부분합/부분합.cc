#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	int tot=0;
	int mn=100000001;
	int a[100001];
	int k=0;
	cin>> n>>m;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	tot+=a[0];
	for (int i=0; i<n;i++){
		while (tot < m && k<n-1){
			k++;
			tot+=a[k];
			
		}
		if (tot>=m) {
			if (mn > k-i+1) mn = k-i+1;
		}
		tot-=a[i];
	}
	if (mn == 100000001) cout <<0;
	else cout << mn;
	return 0;
}