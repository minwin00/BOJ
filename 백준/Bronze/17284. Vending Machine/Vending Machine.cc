#include <iostream>
using namespace std;

int main(void){
	char a;
	int res = 5000;

	while (1){
		cin.get(a);
		if (a=='\n') break;
		else{
			if (a=='1') res-=500;
			else if (a=='2') res-=800;
			else if (a=='3') res-= 1000;
		}
	}
	cout << res;
	return 0;
}