#include <iostream>
using namespace std;

int main(void){
	int a, b;
	int i=1;
	cin >> a >> b;
	while(1){
		if((b-a)*i >= b) break;
		i++;
	}
	cout << i;
	return 0;
}