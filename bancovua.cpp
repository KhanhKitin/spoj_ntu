#include<stdio.h>
int main(){
	char a[1000][1000];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%2==0){
				if(j%2==0) a[i][j]='W';
				else a[i][j]='B';
			}
			else {
				if(j%2==0) a[i][j]='B';
				else a[i][j]='W';
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
