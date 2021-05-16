#include <stdio.h>
int main(){
	int arr[100],i,size,k=0;
	scanf("%d",&size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<=size;i++){
		
			if(arr[i]==0){
				arr[i]=arr[k];
				arr[k]=0;
				k++;
			}
		
	}
	for(i=0;i<size;i++)
		printf("%d, ",arr[i]);
	return 0;
}
