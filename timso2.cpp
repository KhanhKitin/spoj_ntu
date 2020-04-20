#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	string s;
	int i=9;
	if(n==0){
		cout<<10;
	}
	else if(n==1){
		cout<<1;
	}
	else{
		while(n!=1&&i>1){
			if(n%i==0){
				n/=i;
				s=char(i+'0')+s;
			}
			else i--;
		}
		if(n!=1) cout<<-1;
		else{
			cout<<s;
		}
	}
}
