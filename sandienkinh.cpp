#include<iostream>
using namespace std;
long long a[100001];
long long n;
int binaryseach(long long x){
	long long left=0,right=n-1,mid;
	while(left<=right){
		mid=(left+right)/2;
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]>x) right=mid-1;
		else left=mid+1;
	}
	return 0;
}
int main(){
	long long m,j=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		j=binaryseach(a[i]+m);
		if(j!=0){
			cout<<a[i]<<" "<<a[j];
			return 0;
		}
	}
	if(j==0){
		cout<<"-1";
	}
	return 0;
}
