#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int a, b, c;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b >> c;
		cout << (a*(c-1)+b) << "\n";
	}
	return 0;
}