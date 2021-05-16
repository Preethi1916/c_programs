#include<stdio.h>
int main(){
	char c[]="WELCOMETOZOHOCORPORATION";
	char arr[5][5];
	int i,j,k=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			arr[i][j]=c[k];
			k++;
	
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((arr[i][j]=='T') && (arr[i][j+1]=='O') && (arr[i][j+2]=='O'))
			{
				printf("Start Index: <%d,%d>\n",i,j);
				printf("End Index: <%d,%d>",i,j+2);
				
			}
			if((arr[i][j]=='T') && (arr[i+1][j]=='O') && (arr[i+2][j]=='O'))
			{
				printf("Start Index: <%d,%d>\n",i,j);
				printf("End Index: <%d,%d>",i+2,j);
				
			}
		}
	}
	
		return 0;
}
