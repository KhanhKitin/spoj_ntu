#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , a[100] , s=0;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	for(int i = 1 ; i <= n ; i++){
		s += a[i];
	}
	if(n%2==0){
		if( s % 200 == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	else {
		int k=s/200;
		if( (s%200==0)&&(k%2==0)) cout <<"YES\n";
		else cout << "NO\n";
	}
}	
