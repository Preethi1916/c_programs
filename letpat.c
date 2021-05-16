#include<stdio.h>
int main(){
	int row,col,n,i;
	char c[100];
	printf("Size: ");
	scanf("%d",&n);
	scanf("%s",&c[i]);
	
	for(row=0;row<n;row++){
		for(col=0;col<n;col++){
			if((row==col) || ((row+col)==(n-1))){
				printf("%c  ",c[col]);
			}
			else
			    printf("  ");
		}
		printf("\n");
	}
	return 0;
}
