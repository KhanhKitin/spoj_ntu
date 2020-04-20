#include<stdio.h>
#include<string.h>

int main(){
	char s[225],*p;
	int dem=0;
	gets(s);
	p=strtok(s,".");
	while(p!=NULL){
		dem++;
		p=strtok(NULL,".");
	}
	printf("%d",dem);
}
