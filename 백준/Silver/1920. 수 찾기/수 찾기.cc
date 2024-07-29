#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];

int bnry(int s, int e, int x){
  if (s > e) return 0;
  int mid = (s+e)/2;
  if(x==a[mid]) return 1;
  else if(x<a[mid]) return bnry(s, mid-1, x);
  else return bnry(mid+1, e, x);
}

int main(void){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  int k;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> k;
    a[i] = k;
  }
  sort(a, a+n);
  cin >> m;
  for(int i=0;i<m;i++){
    cin >> k;
    cout << bnry(0, n-1, k)<<"\n";
  }
  return 0;
}