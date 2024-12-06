#include <iostream>
using namespace std;

int main(void){
	int x1, x2, s, m;
	cin >> m>> s >>x1>>x2;
	for(int a=0; a<m; a++){
		for (int c = 0; c<m; c++){
			if ((a*s+c)%m==x1 && (a*x1+c)%m==x2){
				cout << a << " " << c;
				return 0;
			}
		}
	}
	return 0;
}