#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	int kt=0;
	scanf("%lld",&n);
	if(n<2) kt=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) kt=1;
	}
	if(kt==0) printf("YES\n");
	else printf("NO\n");
}
