#include <stdio.h>
void main(){
	int arr1[100], arr2[100], arr3[200],i,j,m,n;
	printf("Size of 1st array: ");
	scanf("%d",&m);
	printf("values: ");
	for (i=0;i<m;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Size of 2nd array: ");
	scanf("%d",&n);
	printf("values: ");
	for (i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<n;i++)
	{
		arr3[i]=arr1[i];
	}
	
	for(j=0;j<m;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
	for (i=0;i<n+m;i++){
		printf("%d",arr3[i]);
	}
}
