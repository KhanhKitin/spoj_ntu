#include<iostream>
using namespace std;
int main(){
	int m,n,t;
	cin>>m>>n>>t;
	long long s=0;
	int i=0;
	while(i<n){
		i++;
		s+=t;
		if(i%m==0){
			i++;
		}
	}
	cout<<s;
}
