#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, char> a, pair<int, char> b){
	if (a.first > b.first) return true;
	else return false;
}

int main(void){
	vector <int> v1;
	vector <pair<int, char>> v2;
	int a[3]={0,};
	int b[3]={0,};
	string s[3];
	for (int i=0; i<3; i++){
		cin >> a[i] >> b[i] >> s[i];
		v1.push_back(b[i]%100);
		v2.push_back(make_pair(a[i], s[i][0]));
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), cmp);
	for (int i=0; i<3; i++){
		cout << v1[i];
	}
	cout << "\n";
	for (int i=0; i<3; i++){
		cout << v2[i].second;
	}
	return 0;
}