#include<iostream>
using namespace std;
int main(){
	long long s=0;
	double a,b,c;
	cin>>a>>b;
	if(a-(int)a==0) {
		c=a;
	}
	else c=a+1;
	for(long long i=(int)c;i<=b;i++){
		s+=i;
	}
	cout<<s;
}
