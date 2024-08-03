#include <iostream>

using namespace std;

class eg_result{
	public:
		long long int s;
		long long int t;
		long long int r;

		eg_result(long long s, long long t, long long r){
			this->s = s;
			this->r = r;
			this->t = t;
		}
};

eg_result *eg(int k, int c){
	long long int s0=1, s1=0, t0=0, t1=1, r0=k, r1=c, q=0;
	long long int temp;
	while (1){
		q = r0/r1;
		temp = r1;
		r1 = r0%r1;
		r0 = temp;

		temp = t1;
		t1 = t0 - q*t1;
		t0 = temp;

		temp = s1;
		s1 = s0 - 1*s1;
		s0 = temp;

		if (r1 == 0) break;
	}

	return new eg_result(s0, t0, r0);
}

long long int cal(long long int a, long long int b){
	if (a >=0){
		if (a%b==0) return a/b -1;
		else return a/b;
	}
	else {

		return a/b -1;
	}
}

long long int cal2(long long int a, long long int b){
	a -= 1000000000;
	if (a >=0){
		if (a%b==0) return a/b;
		else return a/b+1;
	}
	else return a/b;
}

int main(void){
	int n;
	int k, c;
	eg_result *res;
	long long int u1, u2, u3;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> k >> c;
		res = eg(k, c);
		if (res -> r != 1) cout << "IMPOSSIBLE\n";
		else {
			u1 = cal(-(res->s) , c);
			u2 = cal((res->t), k);
			u3 = cal2(res->t, k);
			u1 = min(u1, u2);
			if (u3 <= u1 ) cout << res->t - u1*k<< "\n";
			else cout << "IMPOSSIBLE\n";
		}
	}
	return 0;
	
}