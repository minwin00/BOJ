#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int d[501];
int arr[5201][3];
int n, m, w;
int INF = 999999999;

void bf(){
	d[1] = 0;
	for (int i=1; i<=n; i++){
		d[i] = INF;
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<2*m+w; j++){
			int x = arr[j][0];
			int y = arr[j][1];
			int cost = arr[j][2];
			if (d[y] > d[x] + cost){
				if (i == n-1){
					cout << "YES\n";
					return;
				}
				d[y] = d[x] + cost;
			}
		}
	}
	cout << "NO\n";
	return ;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	int a, b, c;
	cin >> t;
	for (int i=0; i<t; i++){
		cin >> n >> m >> w;
		for (int i=0; i<m; i++){
			cin >> arr[2*i][0] >> arr[2*i][1] >> arr[2*i][2];
			arr[2*i+1][1] = arr[2*i][0];
			arr[2*i+1][0] = arr[2*i][1];
			arr[2*i+1][2] = arr[2*i][2];
		}
		for (int i=2*m; i<2*m+w; i++){
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
			arr[i][2] *= -1;
		}
		bf();
		for (int i=0; i<2*m+w; i++){
			for (int j=0; j<3; j++){
				arr[i][j] = 0;
			}
		}
	}
	return 0;
}