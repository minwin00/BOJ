#include <iostream>
#include <vector>
using namespace std;
//누적합(gcd) 2개 사용하기

int arr[1000001];

int gcd(int a, int b){
	if (b==0) return a;
	return gcd(b, a%b);
}

int main(void){
	vector<int> vr, vl;
	int n;
	int flag = 0;
	int gl, gr;
	int res_gcd, res_num;
	int temp;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	gl = arr[0];
	vl.push_back(gl);
	gr = arr[n-1];
	vr.push_back(gr);
	for (int i=1; i<n; i++){
		gl = gcd(gl, arr[i]);
		vl.push_back(gl);
		gr = gcd(gr, arr[n-1-i]);
		vr.push_back(gr);
	}
	res_gcd = vl[n-1];
	for (int i=0; i<n; i++){
		if (i==0) temp = vr[n-1-i-1];
		else if (i==n-1) temp = vl[i-1];
		else temp = gcd(vl[i-1], vr[n-1-i-1]);
		if (gcd(temp, arr[i]) == arr[i]){
			continue;
		}
		else if (temp > res_gcd){
			res_gcd = temp;
			res_num = arr[i];
			flag = 1;
		}
	}
	if (flag) cout << res_gcd << " " << res_num;
	else cout << "-1";		
	return 0;
}