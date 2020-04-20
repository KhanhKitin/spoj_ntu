#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100000],n;
	int h=99999999;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int dem=0;
	for(int i=n-1;i>=0;i--){
		h--;
		dem++;
		h=min(h,a[i]);
		if(h==0) break;
	}
	cout<<dem;
}
