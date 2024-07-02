#include <iostream>
using namespace std;

int main(void)
{
	int i;
	cin >> i;
	if ( i>=620 && i<=780) cout <<"Red";
	if ( i>=590 && i<620) cout <<"Orange";
	if ( i>=570 && i<590) cout <<"Yellow";
	if ( i>=495 && i<570) cout <<"Green";
	if ( i>=450 && i<495) cout <<"Blue";
	if ( i>=425 && i<450) cout <<"Indigo";
	if ( i>=380 && i<425) cout <<"Violet";
	return 0;
}