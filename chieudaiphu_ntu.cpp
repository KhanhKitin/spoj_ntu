#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[100001],b[100001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int tong=b[0]-a[0];
	for(int i=0;i<n-1;i++){
		if(a[i+1]<=b[i]&&b[i+1]<=b[i]) tong=tong;
		else if(a[i+1]<=b[i]&&b[i+1]>b[i]) tong=tong+b[i+1]-b[i];
		else if(a[i+1]>b[i]&&b[i+1]>b[i]) tong=tong+b[i+1]-a[i+1];
	}
	cout<<tong;
}
