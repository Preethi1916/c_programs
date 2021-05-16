//print the elements present in fibonacci
#include<stdio.h>
#include<conio.h>
int main(){
	int res[100],i,j,n,temp,large,n1,n2,n3,fib[100],arr[100];
	printf("Size: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&res[i]);
	for(i=0;i<n;i++)
		arr[i]=res[i];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	large=arr[0]*2;
	fib[0]=0;
	fib[1]=1;
	for(i=2,n1=0,n2=1;i<=large;i++)
	{	
		n3=n1+n2;
		fib[i]=n3;
		n1=n2;
		n2=n3;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<large;j++){
			if(res[i]==fib[j]){
				printf("%d ",res[i]);
			}
		}
		
	}
	
	return 0;
	
}
