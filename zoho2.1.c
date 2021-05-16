#include<stdio.h>
#define MAX 10
# define MIN 2
int main(){
	int arr[MAX][MIN]={0},i,j,n,min,sum[MAX];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<MIN;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		j=0;
		sum[i]=arr[i][j]+arr[i][j+1];
	}
	printf("-----OUTPUT-----\n");
	min=sum[0];
	for(i=0;i<n;i++){
		if(min>=sum[i])
			min=sum[i];
			j=i;
		
		}
	printf("JAR %d",j);
	
	
	return 0;
}
