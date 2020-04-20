#include<stdio.h>
#include<math.h>
int main(){
	long long n,s=0;
	scanf("%lld",&n);
	long long m=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) s+=i+n/i;
	}
	if(s+1==m) printf("YES\n");
	else printf("NO\n");
}
