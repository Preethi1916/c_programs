#include <stdio.h>
int main()
{
    int n, row, colomn,num=1;
    printf("Enter no: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for (colomn=1;colomn<row;colomn++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
        
    }
    n=1;
    for(row=n;row<=1;row--)
    {
        for (colomn=row;colomn<1;colomn--)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
        
    }
    return 0;
}
