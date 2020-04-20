#include<bits/stdc++.h>
using namespace std;
long long kt(long long n){
	long long s=0;
	long long m=n;
	while(n){
		s+=n%10;
		n=n/10;
	}
	if(m%s==0) return true;
	return false;
}
int main(){
	long long n;
	cin >> n;
	if(kt(n)) cout << 1;
	else cout << 0;
}
