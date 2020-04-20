#include<iostream>
using namespace std;
int main(){
	int n;
	int a[100000],b[100000],c[100000]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=0;
	for(int i=0;i<n;i++){
		c[a[i]]++;
		if(c[a[i]]==3){
			b[k]=a[i];
			k++;
			c[a[i]]=0;
		}
	}
	cout<<k<<endl;
	for(int i=0;i<k;i++){
		cout<<b[i]<<" ";
	}
}
