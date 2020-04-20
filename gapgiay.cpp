#include<bits/stdc++.h>
using namespace std;
int main(){
	int a , b , dem=0;
	cin >> a >> b;
	while( a <= b ){
		a *= 2;
		dem++;
	}
	cout << dem-1;
}
