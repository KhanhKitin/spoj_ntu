#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int n;
	cin>>n;
	a[0][0]=1;
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			a[i][0]=a[i][i]=1;
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
