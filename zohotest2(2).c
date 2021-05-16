#include <stdio.h>
int main(){
		int arr[100],n,i,begin,end,temp=0,mid,j;
	printf("Size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	begin=0;
	end=n-1;
	mid=0;
	while(begin<end)
	{
		while(arr[begin]%2!=0)
			{
				begin++;
				mid++;
			}
		while(arr[end]%2==0 && begin<end)
			end--;
			
		if(begin<end)
		{
			temp=arr[begin];
			arr[begin]=arr[end];
			arr[end]=temp;
		}
			
	}
	temp=0;
	for(i=0;i<mid;i++){
		for(j=i+1;j<mid;j++)
		{
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	temp=0;
	for(i=mid+1;i<=end;i++){
		for(j=i+1;j<=end;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d",arr[i]);	
	return 0;
}
