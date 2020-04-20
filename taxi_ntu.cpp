#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100000];
	int n;
	cin>>n;
	int dem=n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	int j=n-1;
	int i=0;
	while(i<j){
		if(a[i]+a[j]<=4){
			a[i]+=a[j];
			j--;
			dem--;
		}
		else i++;
	}
	cout<<dem;
}
