#include <stdio.h>
void main(){
	int arr[100], i, n,k;
	printf("Size of elements: ");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search");
	scanf("%d",&k);
	if(k)
	for(i=0;i<n;i++){
		if(arr[i]==k){
			printf("%d found at %d",k,i);
		}
		
	}
	else
		printf("Not found");
}
