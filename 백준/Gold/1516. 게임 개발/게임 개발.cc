#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[501];
int result[501];
int time[501];
int dg[501];
int n;

void tp(){
	queue<int> q;
	for(int i=1; i<=n; i++){
		if (dg[i] == 0)
		q.push(i);
	}
	for (int i=1; i<=n; i++){	
		int x = q.front();
		q.pop();
		result[x] += time[x];
		for(int j=0; j<v[x].size(); j++){
			int y = v[x][j];
			dg[y]--;
			if (result[y] < result[x]) result[y] = result[x];
			if (dg[y] == 0){
				q.push(y);
			}   
		}
	}
	for (int i=1; i<=n; i++){
		cout << result[i] << "\n";
	}
}

int main(void){
	int a;
	cin >> n;
	for (int i=1; i<=n; i++){
		while (1){
			cin >> a;
			if (a==-1) break;
			else if (time[i] == 0) time[i] = a;
			else {
				v[a].push_back(i);
				dg[i]++;
			}
		}
	}
	tp();
	return 0;
}