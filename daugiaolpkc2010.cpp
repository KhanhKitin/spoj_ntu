#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int thuannghich(int n){
	int tg=0;
	int m=n;
	while(n){
		tg=tg*10+n%10;
		n=n/10;
	}
	if(tg==m) return 1;
	return 0;
}
int main(){
	int dem=0;
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(nt(i)&&thuannghich(i)){
			dem++;
		}
	}
	printf("%d",dem);
}
