#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int res[201][201];
int mp[201][201];

void fw(){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			for (int k=1; k<=n; k++){
				if (mp[j][k] > mp[j][i] + mp[i][k]){
					mp[j][k] = mp[j][i] + mp[i][k];
					res[j][k] = res[j][i];
				}
			}
		}
	}
}
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b, c;
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (i==j) mp[i][j]=0;
			else mp[i][j] = 999999999;
		}
	}
	for (int i=0; i<m; i++){
		cin >> a >> b >> c;
		mp[a][b] = c;
		mp[b][a] = c;
		res[a][b] = b;
		res[b][a] = a;
	}
	fw();
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (i==j) cout << "- ";
			else cout << res[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}