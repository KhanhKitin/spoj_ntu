#include<stdio.h>
#include<string.h>
int main(){
	int a[1000]={0};
	char s[225];
	int dem=0;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(a[s[i]]==0){
			a[s[i]]=1;
			dem++;
		}
	}
	printf("%d",dem);
}
