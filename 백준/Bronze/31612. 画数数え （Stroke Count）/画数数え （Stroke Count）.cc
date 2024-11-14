#include <iostream>
using namespace std;

int main(void){
	int n;
	int res=0;
	char c;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> c;
		if (c=='i' || c=='j') res+=2;
		else if (c=='o') res++;
	}
	cout << res;
	return 0;
}