#include <iostream>
#include <vector>

using namespace std;
long long x, y;

int binarysearch(long long s, long long e, int k){
	long long mid;
	while(s<e){
		mid = (s+e)/2;
		if((y+mid)*100/(x+mid) < k){
			s = mid +1;
		}
		else e = mid;
	}
	if(e==1000000001) return -1;
	return e;	
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	
	cin >> x >>y;
	cout << binarysearch(0, 1000000000+1, y*100/x+1);
	return 0;
}