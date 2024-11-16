#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		for (int j=0; j<2; j++){
			for (int k=0; k<n; k++){
				cout << "@";
			}
			for (int k=0; k<n; k++){
				cout << "   ";
			}
			for (int k=0; k<n; k++){
				cout << "@";
			}
			cout << "\n";
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << "@@@@@";
		}
		cout << "\n";
	}
	for (int i=0; i<n; i++){
		for (int k=0; k<n; k++){
			cout << "@";
		}
		for (int k=0; k<n; k++){
			cout << "   ";
		}
		for (int k=0; k<n; k++){
			cout << "@";
		}
		cout << "\n";
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << "@@@@@";
		}
		cout << "\n";
	}
	return 0;
}