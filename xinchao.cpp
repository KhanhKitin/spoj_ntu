#include<iostream>
using namespace std;
int main(){
	string s;
	string a = "hello";
	getline(cin,s);
	int k=0;
	for(int i=0;i<(int)s.length();i++){
		if(s[i]==a[k]) k++;
	}
	if(k==(int)a.length()) cout<<"YES";
	else cout<<"NO";
}
