#include<iostream>
using namespace std;
int n,a[100];
bool chuaxet[100];
int giaithua(int n){
	if(n==0||n==1) return 1;
	else return (n*giaithua(n-1));
}
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]==false){
			a[i]=j;
			chuaxet[j]=true;
			if(i==n) xuat();
			else Try(i+1);
			chuaxet[j]=false;
		}
	}
}
int main(){
	cin>>n;
	cout<<giaithua(n)<<"\n";
	Try(1);
}
