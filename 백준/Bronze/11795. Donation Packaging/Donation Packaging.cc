#include <iostream>
using namespace std;

int main(void){
    int n;
    int q,w,e;
    int m;
    int a=0, b=0, c=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> q >> w >> e;
        a+=q;
        b+=w;
        c+=e;
        if (a>=30 && b>=30 && c>=30){
          m = a;
          if (m>b) m = b;
          if (m>c) m = c;
          cout << m << "\n";
          a-=m;
          b-=m;
          c-=m;
        }
        else cout << "NO\n";
    }
    return 0;
}