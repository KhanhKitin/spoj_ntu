#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , m ;
	cin >> n >> m;
	for(int i=0;i<=n;i++){
		int j=n-i;
		if(2*i+4*j==m){
			cout << i <<" " << j;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
