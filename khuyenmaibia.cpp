#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n;
	m=n;
	while(n>=10){
		n=n-10+3;
		m+=3;
	}
	cout << m;
}
