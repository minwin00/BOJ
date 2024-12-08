#include <iostream>
using namespace std;

int main(void){
	int n, m;
	int cnt = 0;
	int flag = 0;
	char c;
	cin >> n >> m;
	for (int i=0;i <n; i++){
		flag = 0;
		for (int j=0; j<m; j++){
			cin >> c;
			if (c== '+') flag =1;
		}
		if (flag) cnt++;
	}
	cout << cnt;
	return 0;
}