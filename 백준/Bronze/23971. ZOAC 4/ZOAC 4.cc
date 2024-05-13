#include <iostream>
using namespace std;

int main(void)
{
	int h, w, n, m;
	int t1, t2;
	cin >> h >> w >> n>>m;
	h%(n+1) ? t1 = h/(n+1) +1 : t1 = h/(n+1);
	w%(m+1) ? t2 = w/(m+1) +1 : t2 = w/(m+1);
	cout << t1*t2;
	return (0);
}