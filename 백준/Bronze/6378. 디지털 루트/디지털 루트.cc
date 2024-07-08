#include <iostream>
using namespace std;

int main(void){
	string a;
	int temp;
	int result;
	int i;
	cin >> a;
	while (a != "0"){
		temp = 0;
		i = 0;
		while (a[i]){
			temp += a[i] - '0';
			i++;
		}
		result = temp;
		while (result >= 10){
			temp = result;
			result = 0;
			while(temp>0){
				result += temp%10;
				temp /=10;
			}
		}
		cout << result <<"\n";
		cin >> a;
	}
	return 0;
}