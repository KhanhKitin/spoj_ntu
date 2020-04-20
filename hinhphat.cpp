#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , d1=0 , d2=0 , x ;
	cin >> n;
	for( int i = 1 ; i <= n ; i++ ){
		cin >> x;
		if( x == 1 ) d1++;
		else d2++;
	}
	if( d1 > d2 ) cout << d1 - d2;
	else cout << d2-d1;
}
