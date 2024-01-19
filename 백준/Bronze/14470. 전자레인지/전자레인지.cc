#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int res = 0;
    if (a < 0)
    {
        res += -1*c*a;
        res += d;
    }
    if (a <= 0)
        res += e*b;
    else
        res += e*(b-a);
    cout << res;
    return 0;
}
