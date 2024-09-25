#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b, s = 0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		if (a==136) s += 1000;
		else if (a==142) s+=5000;
		else if (a==148) s+=10000;
		else if (a==154) s+=50000;
	}
	cout << s;
	return 0;
}