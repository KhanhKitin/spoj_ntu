#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[1000000];
	long long tong=0;
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		long long so=s[i]-'0';
		tong+=so;
	}
	while(tong>=10){
		long long s=0;
		while(tong){
			long long tam=tong;
			tam=tam%10;
			s+=tam;
			tong=tong/10;
		}
		tong=s;
	}
	cout<<tong;
}
