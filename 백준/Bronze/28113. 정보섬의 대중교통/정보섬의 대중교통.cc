#include <iostream>
using namespace std;

int main(void){
	int a, n , b;
	cin >> n >> a >> b;
	if (b >= n && a > b) cout << "Subway";
	else if (b>=n & a==b) cout << "Anything";
	else cout << "Bus";
	return 0;
}