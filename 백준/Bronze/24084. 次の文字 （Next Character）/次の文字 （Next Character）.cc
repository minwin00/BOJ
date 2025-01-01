#include <iostream>
using namespace std;

int main(void){
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i=1; i<n; i++){
        if (s[i] == 'J') cout << s[i-1]<<"\n";
    }
    return 0;
}