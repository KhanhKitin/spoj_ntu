//#include<stdio.h>
//#include<conio.h>
//int main(){
//	long long a[100000],b[100000]={0};
//	long long n,s=0;
//	scanf("%lld",&n);
//	for(int i=0;i<n;i++){
//		scanf("%lld",&a[i]);
//		a[i]=a[i]%10100000;
//	}
//	for(int i=0;i<n;i++){
//		int d=1;
//		if(b[i]==0){
//			b[i]=1;
//			for(int j=i+1;j<n;j++){
//				if(a[i]==a[j]){
//					d++;
//					b[j]=1;
//				}
//			}
//			if(d>5) s=s+100+(d-5);
//			if(d<=5) s+=100;
//		}
//	}
//	printf("%lld",s);
//}
#include<stdio.h>
int main(){
	long long a[100000];
	long long n,k,x,s=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&x);
		k=x-10100000;
		a[k]++;
	}
	for(int i=2010;i<=9999;i++){
		if(a[i]>0){
			if(a[i]<=5) s+=100;
			else s=s+95+a[i];
		}
	}
	printf("%lld",s);
}
