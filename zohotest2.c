#include <stdio.h>
int main(){
	int arr[100],odd[100],ev[100],n,i,j=0,k=0,count1=0,count2=0,temp;
	printf("Size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);		
	for(i=0;i<n;i++){
		if(arr[i]%2==0)
		{	
			count1++;
			ev[j]=arr[i];
			j++;
		}
		else{
			count2++;
			odd[k]=arr[i];
			k++;
		}
	}
	for(i=0;i<count2;i++)
	{
		for(j=i+1;j<count2;j++){
			
			if(odd[i]<odd[j]){
				temp=odd[i];
				odd[i]=odd[j];
				odd[j]=temp;
			}
		}
	}
	temp=0;
	for(i=0;i<count1;i++)
	{
		for(j=i+1;j<count1;j++){
			
			if(ev[i]>ev[j]){
				temp=ev[i];
				ev[i]=ev[j];
				ev[j]=temp;
			}
		}
	}
	for(i=0;i<count2;i++)
		printf("%d ",odd[i]);
	for(i=0;i<count1;i++)
		printf("%d ",ev[i]);
	return 0;
}
