#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <algorithm>
using namespace std;

#define ABS(a) ((a) <0? -(a):(a))

int n;
int s, e;
int a[100001] = { 0, };
int res = (int)21e8;
int ansA, ansB;

void input() {
	scanf("%d", &n);
	s = 0;
	e = n - 1;
	for (int i = 0; i < n; i++) scanf("%d", a + i);
	sort(a, a + n);
}

int main(void) {
	int temp;
	input();
	while (s < e) {
		temp = a[s] + a[e];
		if (ABS(temp) < res) {
			res = ABS(temp);
			ansA = a[s];
			ansB = a[e];
		}
		if (res == 0) break;
		else if (temp < 0) s++;
		else e--;
	}
	cout << ansA << " " << ansB;
	return 0;
}