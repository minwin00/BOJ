#include <iostream>
using namespace std;

int main(void){
	int n;
	int t;
	long long p=0;
	long long s=0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> t;
		if (t==0) p-=1;
		else p+=1;
		s+=p;
	}
	cout << s;
	return 0;
}