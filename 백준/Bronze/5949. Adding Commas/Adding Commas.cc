#include <iostream>
using namespace std;

int main(void){
	long long int total;
	long long int t;
	cin >> total;
	t=total;
	int comma_cnt =0;
	long long int divider = 1;
	while(t) {
		t/=10;
		comma_cnt++;
		divider*=10;
	}
	divider/=10;
	while (comma_cnt){
		cout << total/divider;
		total%=divider;
		divider/=10;
		if (comma_cnt%3==1 && comma_cnt != 1) cout << ",";
		comma_cnt--;
	}
	return 0;
}