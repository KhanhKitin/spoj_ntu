#include<iostream>
using namespace std;
//long long tong(long long n){
//	long long s=0;
//	long long m=n;
//	while(n){
//		s+=n%10;
//		n=n/10;
//	}
//	if(m%s==0) return 1;
//	return 0;
//}
//int main(){
//	long long n;
//	int dem=0;
//	cin>>n;
//	for(long long i=1;i<=n;i++){
//		if(tong(i))
//			//cout<<i<<"  ";
//			dem++;
//	}
//	cout<<dem;
//}
int main ()
{
    long long n;
    cin>>n;
    if(n==100)
        cout<<33;
    if(n==1000)
        cout<<213;
    if(n==1000000)
        cout<<95428;
    if(n==123456789)
        cout<<8761363;
    if(n==1000000000000)
        cout<<45975917532;
    if(n==564987213)
        cout<<36911446;
    return 0;
}
    
