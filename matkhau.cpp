#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=0;
	char a[225];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		s+=a[i]-48;
	}
	cout << s;
}
