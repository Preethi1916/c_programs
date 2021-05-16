//program to generate truth table pattern
#include<stdio.h>
#include<math.h>
int main(){
	int i,n,m,j;
	scanf("%d",&n);
	m=pow(2,n);
	
	for(i=1;i<=m;i++)
	{	
		for(j=1;j<=n;j++)
			{
			if(i<=(pow(2,j)/2))
				printf("0 ");
			else
				printf("1 ");
			}
		printf("\n");
	}
	return 0;
}
