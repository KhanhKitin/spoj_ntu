#include<iostream>
using namespace std;
int main(){
	int a[100000],n,k,dem=0;
	long long t;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>t;
		a[t%k]++;
	}
	for(int i=0;i<k;i++){
		if(a[i]) dem++;
	}
	cout<<dem;
}
