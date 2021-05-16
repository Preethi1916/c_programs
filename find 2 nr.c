#include <stdio.h>
int main()
{
 int arr[100],i,n,first,sec,flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Two nrs: ");
   scanf("%d",&first);
  scanf("%d",&sec);
  for(i=0;i<n;i++){
  	if(arr[i]==first){
  		printf("first is at: %d", i);
	  }
	else if(arr[i]==sec)
	{
		printf("second is at: %d", i);
		break;
	}
	else{
		flag++;
			}
  }
 
 if(flag!=0)
 {
 	printf("Element not found!");
 }
  return 0;
  
}
