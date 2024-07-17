#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n;
int a[17][17];
int dx[3] = {1,1,0};
int dy[3] = {1,0,1};

int bfs(){
	queue<pair<pair<int,int>, int> > q;
	int vst[17][17] ={0,};
	int cnt = 0;
	q.push(make_pair(make_pair(0,1),2));
	while(!q.empty()){
		int x = q.front().first.first;
		int y = q.front().first.second;
		int z = q.front().second;
		vst[x][y] = 1;
		q.pop();
		for (int i = 0; i<3; i++){
			if (!((z == 1 && i == 2) || (z==2 && i==1)))
			{
				int nx = x+dx[i];
				int ny = y+dy[i];
				int nz = i;
				if (nx>=0&&ny>=0&&nx<n&&ny<n){
					if (i==0){
						if(!(a[nx][ny] || a[nx-1][ny] || a[nx][ny-1])){
							q.push(make_pair(make_pair(nx, ny), nz));
							if (nx == n-1 && ny == n-1) cnt++;
						}
					}
					else{
						if (!a[nx][ny]){
							q.push(make_pair(make_pair(nx, ny), nz));
							if (nx == n-1 && ny == n-1) cnt++;
						}
					}
				}
			}
		}
	}
	return cnt;
}

int main(void){
	cin >> n;
	for (int i =0; i<n; i++){
		for (int j =0; j<n; j++){
			cin >> a[i][j];
		}
	}
	cout << bfs();
	return 0;
}