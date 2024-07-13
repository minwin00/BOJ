#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
int cheese=0;
int a[101][101];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

void bfs(){
	int vst[101][101]={0,};
	int b[101][101] ={0,};
	queue<pair<int, int> > q;
	q.push(make_pair(0,0));
	vst[0][0] = 1;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if (nx >=0 && ny>=0 && nx<n && ny<m){
				if (a[nx][ny] == 0 && !vst[nx][ny]){
					vst[nx][ny] = 1;
					q.push(make_pair(nx,ny));
				}
				if(a[nx][ny] == 1){
					b[nx][ny] = 1;
				}
			}
		}
	}
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			if (b[i][j]) {
				a[i][j] = 0;
				cheese --;
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int temp=0, nn=0;
	cin >> n >> m;
	for (int i =0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin >> a[i][j];
			if (a[i][j] == 1) {
				cheese ++;
			}
		}
	}
	while (cheese){
		temp = cheese;
		bfs();
		nn++;
	}
	cout << nn << "\n" << temp;

	return 0;
}
