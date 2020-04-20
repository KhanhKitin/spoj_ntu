#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long n;
int binaryseach(long long x){
	int dem=0;
	long long l=0,r=n-1,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==x) {
			return mid;
		}
		else if(a[mid]>x) {
			r=mid-1;
		}
		else l=mid+1;
	}
	return 0;
}
//void qs(long long a[],long long left,long long right){
//	long long l=left,r=right,t=a[(right+left)/2];
//	while(l<=r){
//		while(a[l]<t&&l<right) l++;
//		while(a[r]>t&&r>left) r--;
//		if(l<=r){
//			swap(a[l++],a[r--]);
//		}
//		if(l<right) qs(a,l,right);
//		if(left<r) qs(a,left,r);
//	}
//}
//void sapxep(){
//	for(int i=0;i<n;i++){
//		for(int j=n-1;j>i;j--){
//			if(a[j-1]>a[j]){
//				swap(a[j-1],a[j]);
//			}
//		}
//	}
//}
int main(){
	int dem=0;
	long long j=0;
	long long k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(binaryseach(a[i]+k)!=0){
			dem++;
		}
	}
	cout<<dem;
}
