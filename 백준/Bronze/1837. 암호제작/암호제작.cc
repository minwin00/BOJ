#include <iostream>
#include <vector>
using namespace std;
bool checked[1000001];

int cal(string &s, int d){
	int temp=0;
	int i=0;
	while(s[i]){
		temp = temp*10 + s[i] -'0';
		temp %= d;
		i++;
	}
	return temp;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> primes;
	string s;
	int k;
	cin >> s >>k;
	for (int i=2; i<k; i++){
		if (!checked[i]){
			primes.push_back(i);
			for (int j=i*2; j<k; j+=i){
				checked[j] = true;
			}
		}
	}

		
	for (int i=0; i<primes.size(); i++){
		if (!cal(s, primes[i])) {
			cout << "BAD " << primes[i];
			return 0;
		}
	}
	cout <<"GOOD";
	return 0;
}