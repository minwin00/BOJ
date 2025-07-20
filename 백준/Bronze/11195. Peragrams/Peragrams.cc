#include <iostream>
using namespace std;

int main(void){
    int a[26] ={0,};
    int cnt = 0;
    int j=0;
    string s;
    cin >> s;
    while (s[j]){
        a[s[j]-'a'] += 1;
        j++;
    }
    for (int i=0; i<26; i++){
        if (a[i]%2) cnt++;
    }
    if (cnt > 1) cout << cnt-1;
    else cout << 0;
    return 0;
}