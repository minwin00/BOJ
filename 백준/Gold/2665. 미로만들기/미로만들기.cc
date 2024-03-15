#include <iostream>
#include <queue>

using namespace std;

int n;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int bfs(char (*b)[51])
{
	int vst[51][51] = {0,};
	for (int i = 0; i<n; i++)
	{
		for (int j =0; j<n; j++)
		{
			vst[i][j] = 9999999;
		}
	}
	queue<pair<int, int> > q;
	q.push(make_pair(0, 0));
	while (!q.empty())
	{	
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		vst[0][0] = 0;
		for (int i = 0; i<4; i++)
		{
			int nx = x+dx[i];
			int ny = y+dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
			{
					if(b[nx][ny] == '1')
						{	
							if (vst[nx][ny] > vst[x][y])
							{	vst[nx][ny] = vst[x][y];
								q.push(make_pair(nx, ny));
							}
						}
					else{
						if (vst[nx][ny] > vst[x][y]+1)
						{
							vst[nx][ny] = vst[x][y] + 1;
							q.push(make_pair(nx, ny));
						}
					}
			}
		}
	}

	return vst[n-1][n-1];
}

int main(void)
{
	int cnt = 0;
	char a[51][51];
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
			cin >> a[i][j];
	}
	cout << bfs(a);
	return (0);
}