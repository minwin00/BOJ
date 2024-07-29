#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int r, c;
char board[51][51];
int vst[51][51];
int wvst[51][51];
queue<pair<pair<int, int>, char> > q;

void bfs(int sx, int sy){
	q.push(make_pair(make_pair(sx, sy), 'S'));
	vst[sx][sy] = 1;
	while(!q.empty()){
		int x = q.front().first.first;
		int y = q.front().first.second;
		char sym = q.front().second;
		q.pop();
		for (int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx>=0&&ny>=0&&nx<r&&ny<c){
				if (board[nx][ny] == '.'){
					if(!wvst[nx][ny] && sym == '*') {
						board[nx][ny] = '*';
						wvst[nx][ny] =1;
						q.push(make_pair(make_pair(nx, ny), sym));
					}
					if(!vst[nx][ny] && sym == 'S'){
						vst[nx][ny] = vst[x][y]+1;
						q.push(make_pair(make_pair(nx, ny), sym));
					}
				}
				else if (board[nx][ny] == 'D' && sym=='S' && !vst[nx][ny]){
					vst[nx][ny] = vst[x][y];
				}
			}
		}
	}
}

int main(void){
	char s;
	int sx, sy, ex, ey;
	cin >> r>> c;
	for (int i=0; i<r; i++){
		for (int j=0; j<c;j++){
			cin >> s;
			board[i][j] = s;
			if (s == 'S'){
				sx = i;
				sy = j;
			}
			if (s == '*'){
				q.push(make_pair(make_pair(i, j),'*'));
			}
			if (s== 'D'){
				ex = i;
				ey = j;
			}
		}
	}
	bfs(sx, sy);
	if (vst[ex][ey]==0) cout << "KAKTUS";
	else cout << vst[ex][ey];
	return 0;
}