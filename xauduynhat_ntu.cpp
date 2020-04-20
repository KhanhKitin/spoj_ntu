#include<iostream>
using namespace std;
int main(){
	int max=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		int dem=0;
		int b[10000]={0};
		for(int j=i;j<s.length();j++){
			if(b[s[j]]==1) break;
			else dem++;
			b[s[j]]=1;
		}
		if(dem>max) max=dem;
	}
	cout<<max;
}
