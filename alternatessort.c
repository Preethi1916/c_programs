#include<stdio.h>
int main(){
	int i, j, arr[100],n,temp,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	t=n-1,j=0;
	for(i=0;i<n;i++){
		if(i%2!=0){
		printf("%d ",arr[j]);
		j++;
	}
		else{
		printf("%d ",arr[t]);
		t--;
	}
	
	}
	return 0;
}
