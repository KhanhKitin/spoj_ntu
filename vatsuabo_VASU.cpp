#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10000];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>i;j--){
			if(a[j-1]<a[j]){
				swap(a[j-1],a[j]);
			}
		}
	}
	int tong=a[1];
	for(int i=2;i<=n;i++){
		tong+=max(0,a[i]-i+1);
	}
	cout<<tong;
}
