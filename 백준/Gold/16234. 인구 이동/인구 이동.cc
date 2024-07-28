#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, mn, mx;
int vst[51][51];
int a[51][51];
int dx[4] = {0,-1, 0, 1};
int dy[4] = {1,0,-1,0};

int bfs(int sx, int sy){
	int temp;
	int cnt = 1, sum = 0;
	vector<pair<int, int> > v;
	queue<pair<int, int> > q;
	q.push(make_pair(sx, sy));
	vst[sx][sy] = 1;
	v.push_back(make_pair(sx, sy));
	sum = a[sx][sy];
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i =0; i<4;i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if (nx>=0 && ny>=0&&nx<n&&ny<n && !vst[nx][ny]){
				a[nx][ny] - a[x][y] >0 ? temp = a[nx][ny] - a[x][y] : temp = -a[nx][ny] + a[x][y];
				if (temp>=mn&&temp<=mx){
					vst[nx][ny] = 1;
					q.push(make_pair(nx, ny));
					v.push_back(make_pair(nx, ny));
					cnt++;
					sum+= a[nx][ny];
				}
			}
		}
	}
	temp = sum / cnt;
	for (int i =0; i<v.size();i++){
		a[v[i].first][v[i].second] = temp;
	}
	return cnt;
}

int main(void){
	cin >> n >> mn >> mx;
	int flag = 0;
	int res = 0;
	for (int i =0; i<n; i++){
		for (int j = 0; j<n; j++){
			cin >> a[i][j];
		}
	}
	while (1){
		flag = 0;
		for (int i= 0; i<n; i++){
			for (int j =0; j<n; j++){
				vst[i][j] = 0;
			}
		}
		for (int i= 0; i<n; i++){
			for (int j =0 ;j<n; j++){
				if (!vst[i][j])
				{
					if (bfs(i,j)>1) flag = 1;
				}
			}
		}
		if (flag == 1) res++;
		else break;
	}
	cout << res;
	return 0;
}