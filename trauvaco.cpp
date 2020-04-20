#include<iostream>
using namespace std;
int main(){
	int d=0,k=0;
	long long n,m;
	cin>>n>>m;
	for(long long x=1;x<n;x++){
		for(long long y=1;y<=n-x;y++){
			for(long long z=1;z<=n-x-y;z++){
				if(x+y+z==n&&15*x+9*y+z==3*m){
					if(k==1) break;
					d=1;
					cout<<x<<" "<<y<<" "<<z;
					k=1;
				}
			}
		}
	}
	if(d==0) printf("-1");
}
