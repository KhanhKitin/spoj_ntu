#include<bits/stdc++.h>
using namespace std;
void sapxep(long a[100000],int n){
	for(int i=1;i<n;i++){
		for(int j=n;j>i;j--){
			if(a[j-1]>a[j]){
				swap(a[j-1],a[j]);
			}
		}
	}
}
long tim(long a[100000],int n){
	int x=0;
	for(int i=1;i<=n;i++){
		if(x*x==a[i]) x++;
		if(x*x<a[i]) return x*x;
	}
	return x*x;
	
}
int main(){
	long a[100000];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sapxep(a,n);
	cout<<tim(a,n);
}
