#include <iostream>
using namespace std;

int main(void){
	double a, b, c;
	int flag;
	while (1){
		cin >> a >> b >> c;
		if (a==0&&b==0&&c==0) break;
		flag = 0;
		if (a<=4.5 && b>=150&&c>=200){
			cout << "Wide Receiver ";
			flag = 1;
		}
		if (a<=6.0 && b>=300&&c>=500){
			cout << "Lineman ";
			flag = 1;
		}
		if (a<=5.0 && b>=200&&c>=300){
			cout << "Quarterback ";
			flag = 1;
		}
		if (flag==0) cout << "No positions";
		cout << "\n";
	}
	return 0;
}