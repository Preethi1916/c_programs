/*find the shortest time duration(Houes:mins:secs)of all the given values in array*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define MIN 3
int main(){
	int arr[MAX][MIN]={0},n,i,j,min,s,res[MIN]={0},k,p;
	printf("Total number of times: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<MIN;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	min=arr[0][0]-arr[1][0];
	for(i=0,j=0;i<n-1;i++){
		s=arr[i][j]-arr[i+1][j];
		if(min>abs(s)){
			min=abs(s);
	}
	}
	printf("min: %d\n",min);
	printf("i: %d\n",i);
	if(i>=n-1){
		i=n-1,j=0,p=0;
		s=arr[i][j]-arr[0][0];
		if(min>abs(s))
			min=abs(s);
		printf("min: %d\n",min);
	}
	gen(arr,i,j,p,n,res);
	
	return 0;
}
void gen(int arr[MAX][MIN],int i,int j,int p,int n,int res[MIN])
{ 	
	int k=0;
	for(k=0;k<n;k++)
	{
			res[k]=arr[i][j]-arr[p][j];
			j++;
		}
		for(i=0;i<n;i++)
		printf("%d: ",abs(res[i]));
	
}
//partial output
