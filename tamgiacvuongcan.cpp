#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long k=sqrt(2*n);
	if(k*(k+1)==2*n) cout<<"YES";
	else cout<<"NO";
}
