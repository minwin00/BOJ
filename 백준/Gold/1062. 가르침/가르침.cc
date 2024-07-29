#include <iostream>
using namespace std;

int mx = 0;
int abc[50][26]={0,};
int abc_cnt[50] = {0,};
char check[27];
int n, k;


void solve(){
	int temp;
	int sol=0;
	int t;
	for (int i =0; i<n; i++){
		temp = 0;
		if (abc_cnt[i] > k) continue;
		for(int j = 0; j<k-5; j++){
			t = check[j]-'a';
			if (abc[i][t] == 1) {
				temp++;
			}
		}
		if (temp == abc_cnt[i] - 5) {
//			for (int i=0; i<k-5; i++){
//				cout<<check[i];
//			}
//			cout << "\n";
			sol++;
		}
	}
	if (sol > mx) {
		mx = sol;
	}
}

void dfs(char xx, int cnt){
	int temp;
	int sol;
	int t;
	char c;
	//체크인 
	check[cnt] = xx;
	//목적지인가 
	if (cnt == k-6){
		solve();
	}
	//연결된 곳을 순회
	t = xx-'a';
	for (int i=t+1; i<=25; i++){
		c = 'a'+i;
		//갈 수 있는가
		if (c!='a'&&c!='n'&&c!='t'&&c!='c'&&c!='i')
		{
		//간다
			dfs(c, cnt+1);
		}
	}
	if (cnt > k-6) return;
	
	//체크아웃
}
	

int main(void){
	string s;
	char c;
	int cnt, temp;
	cin >> n >> k;
	for (int i =0; i<n; i++){
		temp = 0;
		cnt = 0;
		cin >> s;
		while (s[temp]){
			if(!abc[i][s[temp] - 'a']){
				abc[i][s[temp]-'a'] = 1;
				abc_cnt[i] ++;
			}
			temp++;
		}
	}
	if(k<5){
		cout << 0;
		return 0;
	}
	else if (k==5) {
		for (int i=0; i<n; i++){
			if (abc_cnt[i] == 5)mx++;
		}
	}
	else{
		for (int i =0; i<26; i++){
			c = i+'a';
			if (c!='a'&&c!='n'&&c!='t'&&c!='c'&&c!='i') dfs(c, 0);
		}
	}
	cout << mx;
	return 0;
}