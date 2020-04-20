#include<iostream>
using namespace std;
int main(){
	int n,m,s;
	string a[100][100];
	cin>>n>>s;
	for(int i=1;i<=s;i++){
		for(int j=1;j<=n;j++){
			a[i][j]="#";
		}
	}
	for(int i=1;i<=n;i++){
		cin>>m;
		m=s-m;
		for(int j=1;j<=m;j++){
			a[j][i]=".";
		}
	}
	for(int i=1;i<=s;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
