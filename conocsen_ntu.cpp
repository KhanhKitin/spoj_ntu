#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,v,x;
	cin>>a>>b>>v;
	if(a-b>=v) cout<<"1";
	else{
		x=(v-b)/(a-b);
		if(x*(a-b)==(v-b)) cout<<x;
		else cout<<x+1;
	}
}
