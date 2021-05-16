#include <stdio.h>
void main(){
	int arr[10],i,n;
	int *ptr=arr;
	printf("Enter the number of array: ");
	scanf("%d",&n);
	printf("enter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;
	for(i=0;i<n;i++){
		printf("%d", *ptr);
		ptr++;
	}
}
