#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	string s;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> s;
		if (s=="Algorithm")	cout << 204;
		if (s=="DataAnalysis") cout << 207;
		if (s=="ArtificialIntelligence") cout << 302;
		if (s== "CyberSecurity") cout << "B101";
		if (s== "Network") cout << 303;
		if (s=="Startup") cout << 501;
		if (s=="TestStrategy") cout <<105;
		cout << "\n";
	}
}