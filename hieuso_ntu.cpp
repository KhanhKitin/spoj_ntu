#include<iostream>
using namespace std;
int main(){
	int a[100000],n,k=0,max=0,j;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>1;i--){
		if(a[i]>max) max=a[i];
		j=max-a[i-1];
		if(j>k) k=j;
	}
	cout<<k;
}
/* mo ta thuat toan
b1 ta xet tu cuoi ve dau day ( nghia tu phai sang) neu phan tu do lon hon gia tri max thi gan no bang max
b2 lay gia tri max do tru cho gia tri sau , roi ket qua se dc dem so sanh voi 1 bien k,neu no lon hon k thi k 
bang no
+, neu ma phan tu do ma ko lon hon max thi ke ca lay phan tu do tru di phan tu ke sau thi hieu cx ko lon bang max
tru phan tu ke dc
*/
