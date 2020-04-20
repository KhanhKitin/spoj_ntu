#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100000],b[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		b[i]=a[i+1]-a[i];
	}
	int m=n-1;
	sort(b,b+m);
	cout<<b[0];
}
