#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[100001],s[100001];
	s[0]=0;
	long n,k,res=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	for(int i=0;i<=n;i++)
		for(int j=n;j>=1;j--){
			if((s[j]-s[i])%k==0)
			if(j-i>res) res=j-i;
			if(n-i<res) break;
		}
	cout<<res;
}
