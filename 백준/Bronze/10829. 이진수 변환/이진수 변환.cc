#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int n;
	stack<int> s;

	cin >> n;
	if (n == 0) {
		cout << 0;
		return (0);
	}
	while (n > 0){
		s.push(n%2);
		n/=2;
	}
	while (!s.empty()){
		cout << s.top();
		s.pop();
	}
	return (0);
}