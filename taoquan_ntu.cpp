#include<iostream>
using namespace std;
int main(){
	long long n,m,k,t;
	cin>>n>>m>>k;
	if(n/2<m){
		t=n/2;
	}
	else t=m;
	if((m+n-k)/3<t) cout<<(m+n-k)/3;
	else cout<<t;
}
