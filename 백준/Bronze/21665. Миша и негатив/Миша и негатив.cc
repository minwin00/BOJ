#include <iostream>
using namespace std;

int main(void){
	int a, b;
	int cnt = 0;
	char m1[101][101] ={0,};
	char m2[101][101] ={0,};
	cin >> a >> b;
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cin >> m1[i][j];
		}
	}
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cin >> m2[i][j];
		}
	}
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			if (m1[i][j] == m2[i][j]) cnt ++;
		}
	}
	cout << cnt;
	return 0;
}