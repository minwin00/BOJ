#include <iostream>
using namespace std;

int main(void){
	int n;
	int res = 0;
	string s;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> s;
		if (s == "Poblano") res+=1500;
		else if(s=="Mirasol") res+=6000;
		else if(s=="Serrano") res+=15500;
		else if(s=="Cayenne") res+=40000;
		else if(s=="Thai") res+=75000;
		else if(s=="Habanero") res+=125000;
	}
	cout << res;
	return 0;
}