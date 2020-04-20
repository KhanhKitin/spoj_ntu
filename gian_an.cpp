#include <bits/stdc++.h>
using namespace std;
int m,n,a[101][101];
int main()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=n;j++){
    		a[i][j]=a[i][j]+ max(a[i-1][j],a[i][j-1]);
		}
	}
   	cout<<a[m][n];
}
    
