#include <iostream>
using namespace std;

char a[101][101];
int main(void){
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (a[i][j] != a[j][i]){
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}