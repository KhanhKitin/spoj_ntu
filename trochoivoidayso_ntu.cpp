#include<bits/stdc++.h>
using namespace std;
long long a[200010]; long long f[200010];
int main(){
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
//	for(int i=1;i<n;i++){
//		long long s=0;
//		s+=a[i];
//		if(s>res){
//			res=s;
//		}
//		for(int j=i+1;j<=n;j++){
//			s+=a[j];
//			if(s>res){
//				res=s;
//			}
//		}
//	}
//	cout<<res;
 	f[0]=-1e9;
 	long long res=-1e9;
 	for(int i=1;i<=n;i++){
 		f[i]=max(f[i-1]+a[i],a[i]);
 		res=max(res,f[i]);
	 }
	 cout<<res;
}
