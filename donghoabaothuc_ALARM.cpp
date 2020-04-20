#include<bits/stdc++.h>
using namespace std;
int a[10]={6,2,5,5,4,5,6,3,7,6};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=9;j++){
			for(int h=0;h<=5;h++){
				for(int k=0;k<=9;k++){
					if(a[i]+a[j]+a[h]+a[k]==n){
						cout<<i<<j<<":"<<h<<k;
						return 0;
					}
				}
			}
		}
	}
	cout<<"Impossible";
	
}
