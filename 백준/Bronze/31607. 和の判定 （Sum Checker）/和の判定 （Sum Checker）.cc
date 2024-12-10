#include<iostream>
using namespace std;

int main(void){
	int a, b, c;
	cin>>a>>b>>c;
	if (a+b==c) cout <<1;
	else if (a+c==b) cout <<1;
	else if (c+b==a) cout <<1;
	else cout << 0;
	return 0;
}