#include <stdio.h>

int main()
{
    int i,arr_count;
    unsigned long int sum=0,min,max,k,arr[100];
    scanf("%d",arr_count);
    for(i=0;i<arr_count;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<arr_count;i++)
    {
        sum=sum+arr[i];
    }
    k=min=sum;
    
    for(i=0;i<arr_count;i++)
    {
        if(min>k-arr[i])
            min=sum-arr[i];
    }
    max=0;
    for(i=0;i<arr_count;i++)
    {
        if(max<k-arr[i])
            max=sum-arr[i];
    }
    
    printf("%d %d", min,max);


    return 0;
}

