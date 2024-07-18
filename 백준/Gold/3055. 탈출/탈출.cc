#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
char a[51][51];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


void bfs(int wx, int wy, int water[][51]){
	queue<pair<int, int> > q;
	q.push(make_pair(wx, wy));
	water[wx][wy] = 1;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i =0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if (nx >=0 && ny>=0 && nx<n&&ny<m){
				if(a[nx][ny] == '.' && (water[nx][ny] >water[x][y] +1)){
					water[nx][ny] =water[x][y] +1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	
}

void bfs2(int sx, int sy, int vst[][51], int water[][51]){
	queue<pair<int, int> > q;
	q.push(make_pair(sx, sy));
	vst[sx][sy] = 1;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i =0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if (nx >=0 && ny>=0 && nx<n&&ny<m){
				if((a[nx][ny] == '.'|| a[nx][ny] == 'D') && (vst[nx][ny] >vst[x][y] +1) && (water[nx][ny] > vst[x][y] +1)){
					vst[nx][ny] =vst[x][y] +1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int water[51][51] ={0,};
	int vst[51][51] ={0,};
	vector<pair<int, int> > v;
	char c;
	int sx, sy;
	int ex, ey;
	int wx, wy;
	cin >> n >> m;
	for (int i =0; i<n; i++){
		for (int j =0; j<m; j++){
			cin >> c;
			a[i][j] =c;
			vst[i][j] = 9999999;
			water[i][j] = 9999999;
			if (a[i][j] == 'D'){
				ex = i;
				ey = j;
			}
			if (a[i][j] == 'S'){
				sx = i;
				sy = j;
			}
			if (a[i][j] == '*'){
				wx = i;
				wy = j;
				v.push_back(make_pair(wx, wy));
			}
		}
	}
	for (int i =0; i<v.size(); i++){
		bfs(v[i].first, v[i].second, water);
	}
	bfs2(sx, sy, vst, water);
	if (vst[ex][ey] == 9999999) cout << "KAKTUS";
	else cout << vst[ex][ey]-1;
	return 0;
}