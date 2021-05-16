#include<stdio.h>
#include<math.h>
int main(){
	int arr[100],i,n,j,temp,sum=0,sqr=0;
	printf("Total Elements: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	for(i=0;i<n;i++){
		sum=0;
		if(arr[i]==(sqrt(arr[i]) * sqrt(arr[i]))){
			sum=sum+5;
		}
	    if((arr[i]%4)==0 || (arr[i]%6)==0){
			sum=sum+4;
		}
		if((arr[i]%2)==0){
			sum=sum+3;
		}	
		
		printf("<%d,%d>",arr[i],sum);
	}
	return 0;
	
}

