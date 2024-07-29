#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int like[101] = {0,};

bool compare(pair<int, int> a, pair<int, int> b){
	if(like[a.first] == like[b.first])
		return a.second < b.second;
	return like[a.first] < like[b.first];
}

bool c2(pair<int, int> a, pair<int, int> b){
	return a.first < b.first;
}

int main(void){
	vector<pair<int, int> > v;
	int cnt = 0;
	int n, k, a;
	cin >> n >> k;
	for (int i=0; i<k; i++){
		cin >> a;
		if (cnt<n){
			if (like[a]) like[a]=like[a]+1;
			else{
				v.push_back(make_pair(a, i));
				like[a] = like[a]+1;
				cnt++;
			}
		}
		else{
			if (like[a]) like[a] = like[a]+1;
			else{
				like[v[0].first] = 0;
				v[0].first = a;
				v[0].second = i;
				like[a] = like[a]+1;
			}
		}
		sort(v.begin(), v.end(), compare);
	}
	sort(v.begin(), v.end(), c2);
	for (int i=0; i<v.size(); i++){
		cout << v[i].first << " ";
	}
	return 0;
}