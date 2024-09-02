#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	char c;
	int a=0, b=0;
	int flag = 0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> c;
		if (a-b>=2 || b-a>=2){
			continue;
		}
		if (c=='D') a++;
		else b++;
	}
	cout << a << ":" << b;
	return 0;
}