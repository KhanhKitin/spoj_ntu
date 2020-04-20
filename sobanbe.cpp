#include<bits/stdc++.h>
using namespace std;
int main(){
	int a , b;
	int s=0 , s1=0;
	cin >> a >> b;
	for( int i = 1 ; i<= a/2 ; i++ ) {
		if( a % i == 0 ) s += i; 
	}
	for( int j = 1 ; j<= b/2 ; j++ ) {
		if( b % j == 0 ) s1 += j; 
	}
	if( s == b && s1 ==a ) cout << "YES\n";
	else cout << "NO\n";
	}

