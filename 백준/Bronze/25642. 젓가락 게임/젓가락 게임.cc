#include <iostream>
using namespace std;

int main(void){
	int a, b;
	int c=1;
	cin >> a >> b;
	while(1){
		if (a>4) {
			cout << "yj";
			return 0;
		}
		else if (b>4) {
			cout << "yt";
			return 0;
		}
		if(c%2) b+=a;
		else a+=b;
		c++;
	}
	return 0;
}