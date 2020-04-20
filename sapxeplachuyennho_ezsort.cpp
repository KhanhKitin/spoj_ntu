#include<iostream>
using namespace std;
int main(){
	long a[1000000],n,k,dem=0;
	cin>>n;
	k=n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]==k){
			k--;
			dem++;
		}
	}
	cout<<n-dem;
}
