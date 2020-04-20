#include<bits/stdc++.h>
using namespace std;
bool thuannghich(int n){
	int m=n;
	int tg=0;
	while(n){
		tg=tg*10+n%10;
		n=n/10;
	}
	if(tg==m) return true;
	return false;
}
//void sapxep(int a[100],int n){
//	for(int i=0;i<n;i++){
//		for(int j=n-1;j>i;j--){
//			if(a[j]<a[j-1]){
//				swap(a[j],a[j-1]);
//			}
//		}
//	}
//}
int main(){
	int a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
//	sapxep(a,n);
	for(int i=0;i<n;i++){
		if(thuannghich(a[i])) cout << a[i] <<" ";
	}
}
