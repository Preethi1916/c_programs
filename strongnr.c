#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,num,i,sum,fact=1, temp,rem;
    printf("Nr of digits: ");
    scanf("%d",&n);
    printf("Value: ");
    scanf("%d",&num);
    sum=0;
    temp=num;
    
    while(temp!=0)
    {
        
        rem=temp%10;
        
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(num==temp)
        printf("Strong nr");
    else
        printf("not a strong nr");
    return 0;
    
}
