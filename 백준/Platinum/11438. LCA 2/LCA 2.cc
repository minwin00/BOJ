#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[100001];
int ac[100001][17];
int depth[100001];
int max_d=0;
int n,m;

void bfs(){
	queue<int> q;
	q.push(1);
	depth[1] = 1;
	ac[1][0] = 1;
	while (!q.empty()){
		int x = q.front();
		q.pop();
		for (int i=0; i<v[x].size(); i++){
			int nx = v[x][i];
			if (!depth[nx]){
				depth[nx] = depth[x]+1;
				ac[nx][0] = x;
				q.push(nx);
			}
		}
	}
}
		
void sort_ac(){
	for (int i=1; i<max_d; i++){
		for (int j=1; j<=n; j++){
			ac[j][i] = ac[ac[j][i-1]][i-1];
		}
	}
}

int solve(int a, int b){
	int temp;
	int j;
	if (depth[a] > depth[b]){
		temp = a;
		a = b;
		b = temp;
	}
	for (int i=max_d-1; i>=0; i--){
		if (depth[a] <= depth[ac[b][i]]) b=ac[b][i];
	}
	if (a==b) return a;
	for (j=max_d-1; j>=0; j--){
		if (ac[a][j] != ac[b][j]){
			a = ac[a][j];
			b = ac[b][j];
		}
	}
	return ac[a][0];
}


int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int temp=1;
	int a, b;
	cin >> n;
	for (int i=1; i<n; i++){
		cin >>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	while (temp<n){
		temp*=2;
		max_d++;
	}
	
	bfs();
	sort_ac();
	cin >> m;
	for (int i=0; i<m; i++){
		cin >> a >> b;	
		cout << solve(a,b) << "\n";
	}
	return 0;
}