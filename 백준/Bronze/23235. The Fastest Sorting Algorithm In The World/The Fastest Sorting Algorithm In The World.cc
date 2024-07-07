#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s;
	int i=1;
	
	while(1)
	{
		getline(cin, s);
		if (s[0] == '0' && s[1] == '\0'){
			return 0;
		}
		else cout << "Case " <<i<<": Sorting... done!\n";
		i++;
	}
	return 0;
}
