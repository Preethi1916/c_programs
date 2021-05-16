#include<stdio.h>
int main(){
	int arr[100],n,m,k=2,i,j,max,p;
	printf("arr size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0,j=i+1;i<k,k<n;i++,j++,k++)
	{
	if(arr[i]<arr[j])
			max=arr[j];
			printf("%d ",max);
			
	}	
	

	return 0;
}
