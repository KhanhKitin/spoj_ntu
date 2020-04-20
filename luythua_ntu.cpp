#include<bits/stdc++.h>
using namespace std;
////long long luythua(long long x,long long n){
////	if(n==1) return x;
////	else return (x*luythua(x,n-1));
////}
//long long luythua(long long x, long long n)
//{
//    if(n == 1) return x;
//    long long  tmp = luythua(x, n/2);
//    return (n & 1) ? tmp * tmp * x : tmp * tmp;
//}
//int main(){
//	long long x,n;
//	cin>>x>>n;
//	cout<<luythua(x,n);
//	//cout<<(luythua(x,n)%10000);
//}
long long a,n;
long long power(long long i)
{
    if (i==1) return a;
    long long s=(power(i/2)*power(i/2))%10000;
    if (i%2==1) s=(s*a)%10000;
    return s;
}
main()
{
    cin >> a >> n;
    cout << power(n);
}
