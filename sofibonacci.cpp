#include<bits/stdc++.h>
using namespace std;
int main(){
	int	a[100] , n;
	a[1] = 1;
	a[2] = 1;
	cin >> n;
	for( int i = 3 ; i <= n ; i++ )
		a[i]=a[i-1]+a[i-2];
	for( int i = 1 ; i <= n ; i++ )
	    cout << a[i] << " ";
}
