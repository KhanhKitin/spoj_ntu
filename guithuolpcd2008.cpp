#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char s[1000];
	scanf("%s",s);
	scanf("%d",&n);
	for(int i=n-1;i>=0;i--){
		printf("%c",s[i]);
	}
	for(int i=strlen(s)-1;i>=n;i--){
		printf("%c",s[i]);
	}
}

