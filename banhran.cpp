#include<iostream>
using namespace std;
int main(){
	int n,k,s,p;
	cin>>n>>k;
	if(n<k){
		cout << 10;
		return 0;
	}
	else {
		p=n*2;
		if(p%k==0) cout << (p/k)*5;
		else cout << (p/k)*5+5;
	}
}
