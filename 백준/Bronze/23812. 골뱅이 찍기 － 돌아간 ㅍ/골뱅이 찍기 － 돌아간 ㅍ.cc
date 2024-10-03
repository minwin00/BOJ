#include <iostream>
using namespace std;

int n;

void aa(){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << "@";
		}
		for (int j=0; j<n; j++){
			cout << "   ";
		}
		for (int j=0; j<n; j++){
			cout << "@";
		}
		cout << "\n";
	}
}

void bb(){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << "@";
		}
		for (int j=0; j<n; j++){
			cout << "@@@";
		}
		for (int j=0; j<n; j++){
			cout << "@";
		}
		cout << "\n";
	}
}

int main(void){
	cin >> n;
	
	aa();
	bb();
	aa();
	bb();
	aa();
	return 0;
}