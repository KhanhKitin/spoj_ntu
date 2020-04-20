#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1000];
	int n,t,i=0;
	cin >> n;
	if(n==0) cout << 0;
	while(n){
		a[i]=n%2;
		i++;
		n=n/2;
	}
	for(int j=i-1;j>=0;j--){
		cout << a[j];
	}
}
