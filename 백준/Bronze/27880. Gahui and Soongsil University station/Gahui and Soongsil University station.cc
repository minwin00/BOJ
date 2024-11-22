#include <iostream>
using namespace std;

int main(void){
	int a, sum=0;
	string s;
	for (int i=0; i<4 ;i++){
		cin >> s >> a;
		if (s == "Es") sum+=21*a;
		else sum += 17*a;
	}
	cout << sum ;
	return 0;
}