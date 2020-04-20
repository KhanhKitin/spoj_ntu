#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,dem=0;
	long long k=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		k*=i;
		if(k%10!=0) k=k%1000;
		while(k%10==0){
			dem++;
			k=k/10;
		}
	}
	cout<<dem;
}
