#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int MAX_DEPTH = 17;
vector<int> v[50001];
int ac[50001][17];
int depth[50001];

void bfs(){
	queue<int> q;
	int vst[50001] = {0,};
	q.push(1);
	depth[1] = 1;
	ac[1][0] = 1;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for (int i=0; i<v[x].size(); i++){
			int y = v[x][i];
			if (!depth[y]){
				depth[y] = depth[x] +1;
				ac[y][0] = x;
				q.push(y);
			}
		}
	}
}

void sort_ac(){
	for (int i=1; i<MAX_DEPTH; i++){
		for (int j=1; j<=n; j++){
			ac[j][i] = ac[ac[j][i-1]][i-1];
		}
	}
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int solve(int a, int b){
	if(depth[a] > depth[b]){
		swap(&a, &b);
	}
	for (int i=MAX_DEPTH-1; i>=0; i--){
		if (depth[a] <= depth[ac[b][i]]){
			b = ac[b][i];
		}
	}
	if (a==b) return a;
	for (int i=MAX_DEPTH-1;i>=0; i--){
		if (ac[a][i] != ac[b][i]){
			a = ac[a][i];
			b = ac[b][i];
		}
	}
	return ac[a][0];
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;

	cin >> n;
	for (int i=1; i<n; i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	cin >> m;
	bfs();
	sort_ac();
	for (int i=0; i<m; i++){
		cin >> a >> b;
		cout << solve(a,b) << "\n";
	}
	return 0;
}