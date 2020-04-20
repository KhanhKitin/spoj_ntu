#include<bits/stdc++.h>
using namespace std;
//void sapxep(long long a[],long long left,long long right){
//	long long l=left,r=right,t=a[(right+left)/2];
//	while(l<=r){
//		while(a[l]<t&&l<right) l++;
//		while(a[r]>t&&r>left) r--;
//		if(l<=r){
//			swap(a[l++],a[r--]);
//		}
//		if(l<right) sapxep(a,l,right);
//		if(left<r) sapxep(a,left,r);
//	}
//}
int main(){
	long long a[250001];
	long long n,m,k,h=1;
	cin>>n>>m>>k;
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=m;j++){
			a[h]=i*j;
			h++;
		}
	}
//	for(int h=1;h<=n*m;h++){
//		cout<<a[h]<<" ";
//	}
//	sapxep(a,1,n*m);
//	for(int h=1;h<=n*m;h++){
//		cout<<a[h]<<" ";
//	}
	sort(a,a+h);
	cout<<a[k];
}
