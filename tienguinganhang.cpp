#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	double n,m;
	int dem=0;
		cin>>n>>m;
		while(n<m){
			n=n+round((n*10)/100);
			dem++;
		}
	cout<<dem<<"\n";
}
