#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int m, n;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
char a[51][51];

int bfs(int sx, int sy){
	int vst[51][51] = {0,};
	int mx = -1;
	for(int i =0; i<n; i++){
		for (int j = 0; j<m; j++){
			vst[i][j] = 9999999;
		}
	}
	queue<pair<int, int> > q;
	q.push(make_pair(sx, sy));
	vst[sx][sy] = 0;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i =0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx>=0 && ny >=0 && nx<n && ny <m && a[nx][ny] == 'L'){
				if (vst[nx][ny] > vst[x][y] + 1){
					vst[nx][ny] = vst[x][y] +1;
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
	for(int i =0; i<n; i++){
		for (int j = 0; j<m; j++){
			if (vst[i][j] < 9999999){
				if (mx < vst[i][j]){
					mx = vst[i][j];
				}
			}
		}
	}
	return mx;
}

int main(void){
	int mx = -1;
	int t;
	cin >> n>>m;
	for (int i = 0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for (int i =0; i<n; i++){
		for (int j = 0; j<m;j++){
			if (a[i][j] == 'L') {
				t = bfs(i,j);
				if (mx < t) mx = t;
			}
		}
	}
	cout << mx;
	return 0;
}