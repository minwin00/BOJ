#include <iostream>
using namespace std;

int main(void){
	int n;
	string s1, s2;
	int cnt;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> s1 >> s2;
		int j=0;
		cnt = 0;
		while (s1[j]){
			if (s1[j] != s2[j]){
				cnt++;
			}
			j++;
		}
		cout <<"Hamming distance is "<< cnt << ".\n";
	}
}