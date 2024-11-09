#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		for (int i=0; i<n; i++){
			cout << "G";
		}
		for (int i=0; i<n; i++){
			cout << ".";
		}
		for (int i=0; i<n; i++){
			cout << ".";
		}
		for (int i=0; i<n; i++){
			cout << ".";
		}
		cout << "\n";
	}
	for (int i=0; i<n; i++){
		for (int i=0; i<n; i++){
			cout << ".";
		}
		for (int i=0; i<n; i++){
			cout << "I";
		}
		for (int i=0; i<n; i++){
			cout << ".";
		}
		for (int i=0; i<n; i++){
			cout << "T";
		}
		cout << "\n";
	}
	for (int i=0; i<n; i++){
		for (int i=0; i<n; i++){
			cout << ".";
		}
		for (int i=0; i<n; i++){
			cout << ".";
		}
		for (int i=0; i<n; i++){
			cout << "S";
		}
		for (int i=0; i<n; i++){
			cout << ".";
		}
		cout << "\n";
	}
	return 0;
}