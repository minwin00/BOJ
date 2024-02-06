#include <iostream> 
#include <vector>

using namespace std;
char arr[2187][2187];
void blank(int x, int y, int p){
	for(int i=0; i<p; i++){
		for(int j=0;j<p;j++){
			arr[x+i][y+j] = ' ';
		}
	}
}
void recursive(int x, int y, int p){
	if(p==1){
		arr[x][y] = '*';
	}
	else{
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				if(i==1&&j==1){
					blank(x+p/3*i, y+p/3*j,p/3);
				}
				else{
					recursive(x+p/3*i, y+p/3*j, p/3);
				}
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	
	recursive(0,0,n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << arr[i][j];
		}
		cout << '\n';
	}
	return 0;
}