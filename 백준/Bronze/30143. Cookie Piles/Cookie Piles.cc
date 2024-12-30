#include <iostream>
using namespace std;

int main(void){
    int t;
    int n, a, d;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n >> a >> d;
        cout << n*(2*a+(n-1)*d)/2<<"\n";
    }
    return 0;
}