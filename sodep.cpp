#include<bits/stdc++.h>
using namespace std;
bool tong(long n){
	long s = 0 , tg;
	while(n){
		s += n % 10;
		n = n / 10;
	}
	while(s){
		tg = s % 10;
		if( tg == 9 ) return true; 
		s = s / 10;
	}
	return false;
}
int main(){
	long n;
	cin >> n;
	if(tong(n)) cout << "YES\n";
	else cout << "NO\n";
}
