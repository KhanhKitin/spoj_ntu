#include<iostream>
using namespace std;
int a[1000000],n,k;
void khoitao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void xuat(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void next(){
	int i=k;
	while(a[i]==n-k+i) i--;
	a[i]++;
	for(int t=i+1;t<=k;t++){
		a[t]=a[i]+(t-i);
	}
}
bool kt(){
	for(int i=1;i<=k;i++){
		if(a[i]!=n-k+i) return false;
	}
	return true;
}
void sinh(){
	int dem=1;
	xuat();
	while(!kt()){
		next();
		dem++;
		xuat();
	}
}
int main(){
	cin>>n>>k;
	khoitao();
	sinh();
}
