#include<stdio.h>
int n,m,i,j;

int main(){

	scanf("%d%d",&n,&m);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			if(i%2==0||(i%4==3&&j==0)||(i%4==1&j==m-1))
            printf("#");
			else 
            printf(".");
		}
		printf("\n");
	}
}
