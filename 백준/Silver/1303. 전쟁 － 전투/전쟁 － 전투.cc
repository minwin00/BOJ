#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
char a[101][101];
int vst[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int bfs(int sx, int sy, char c){
	int cnt = 1;
	queue<pair<int, int> > q;
	q.push(make_pair(sx, sy));
	vst[sx][sy] = 1;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if (nx >=0 && nx <n && ny >= 0 && ny <m){
				if (!vst[nx][ny] && a[nx][ny] == c){
					q.push(make_pair(nx, ny));
					vst[nx][ny] = 1;
					cnt ++;
				}
			}
		}
	}
	return cnt;
}

int main(void){
	int wc = 0, bc =0;
	int t;
	cin >> m >> n;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for (int i =0; i<n; i++){
		for (int j = 0; j<m; j++){
			if (!vst[i][j]) {
				t = bfs(i,j, a[i][j]);
				if (a[i][j] == 'W') wc += t*t;
				if (a[i][j] == 'B') bc += t*t;
			}
		}
	}
	cout << wc << " " << bc;

	return 0;
}