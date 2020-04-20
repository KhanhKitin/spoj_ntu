#include<stdio.h>
#include<math.h>
int main(){
	long a,n,b;
	scanf("%ld",&a);
	scanf("%ld",&n);
	if(a>=10){
		a=a%10;
	}
	b=a;
	for(int i=2;i<=n;i++){
		a=a*b;
		if(a/10!=0)
			a=a%10;
	}
	printf("%ld",a);
}
