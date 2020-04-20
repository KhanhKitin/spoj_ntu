#include<stdio.h>
void khoitao(int a[100],int n){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
void in(int a[100],int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}
void next(int a[100],int n){
	for(int i=n-1;i>=0;i--){
		if(a[i]==0){
			a[i]=1;
			for(int k=i+1;k<n;k++)
				a[k]=0;
			break;
		}
	}
}
int final(int a[100],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) dem++;
	}
	if(dem==n) return 1;
	else return 0;
}
void nhiphan(int a[100],int n){
	in(a,n);
	while(final(a,n)==0){
		next(a,n);
		in(a,n);
	}
}
int main(){
	int a[100],n;
	scanf("%d",&n);
	khoitao(a,n);
	nhiphan(a,n);
}

