#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	while ( !(a== 0 && b==0 && c==0)){
		if (a!=0 && b != 0 && c != 0 &&
			b/a == c/b && b%a == 0 && c%b == 0){
			cout << "GP " << c*c/b << "\n";
		}
		else if (b-a == c-b){
			cout << "AP " << 2*c -b << "\n";
		}
		cin >> a >> b >> c;
	}
	return (0);
}