#include <iostream>
using namespace std;

int main(void)
{
    int a;
    int res=1;
    cin >> a;
    for (int i =0; i< a; i++)
    {
        res*=2;
    }
    cout << res;
    return 0;
}