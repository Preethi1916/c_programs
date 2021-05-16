#include<stdio.h>
int main(){
	int arr1[100],arr2[100],sum[100],n1,n2,i,k,j,n;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
		scanf("%d",&arr1[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
		scanf("%d",&arr2[i]);
	if(n1>n2){
	n=n1-n2;
	k=0;
	j=0;
	for(i=n;i<n1;i++)
		{
		  sum[k]=arr1[n]+arr2[j];
		  j++;
		  k++;
		}
	}
	else{
	n=n2-n1;
	k=0;
	j=0;
	for(i=n;i<n2;i++)
		{
		  sum[k]=arr2[n]+arr1[j];
		  j++;
		  k++;
		}
	}
	for(i=0;i<n2;i++)
		printf("%d ",sum[i]);
printf("k %d\n",k);
printf("j %d\n",j);
	
return 0;		
	
}
