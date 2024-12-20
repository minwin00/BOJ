#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	while (n){
		if (n > 1000000 && n<5000000) {
			cout << n*9/10<<"\n";
		}
		else if (n>5000000){
			cout << n*8/10<<"\n";;
		}
		else cout << n<<"\n";
		cin >> n;
	}
	return 0;
}