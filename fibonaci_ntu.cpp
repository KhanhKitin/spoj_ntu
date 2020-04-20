#include<stdio.h>
	long long a[1000007];
int main(){
	long long k=1000007;
	long long n;
	scanf("%lld",&n);
	a[0]=0,a[1]=1;
	for(long long i=2;i<=n;i++){
		a[i]=(a[i-1]+a[i-2])%k;
	}
	printf("%lld",a[n]);
}
