#include <stdio.h>
void main(){
	int val, n, rem,arr[100],i;
	printf("Nr of digits:");
	scanf("%d",&n);
	printf("Value:");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		rem=val%10;
		arr[i]=rem;
		val=val/10;
		
	}
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	
}
