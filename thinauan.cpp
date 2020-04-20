#include<iostream>
using namespace std;
long long a[100001],p[100001];
long long n,m;
int binaryseach(long long &x){
	long long left,right,ans,mid;
	left=1,right=n;ans=0;
	while(left<=right){
		mid=(left+right)/2;
		if(x<=a[mid]){
			ans=mid;
			//cout<<ans<<" ";
			right=mid-1;
		}
		else left=mid+1;
	}
	return ans;
}
int next(){
	for(long long i=1;i<=m;i++){
		cout<<binaryseach(p[i])<<" ";
	}
}
int main(){
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	cin>>m;
	for(long long j=1;j<=m;j++){
		cin>>p[j];
	}
	next();
}

