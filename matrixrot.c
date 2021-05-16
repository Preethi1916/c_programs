#include <stdio.h>
#include <string.h>
#define MAX 100
/*
1. get the mxn matrix
2. get num of rotation 
3. row vice up to down assignment*/
int main(){
    int p=1,m,n,i,j,k,r,arr[MAX][MAX],arr1[MAX][MAX]={0};
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &r);
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    do
    {
        
    //acheiving first column 00 to n0
    for (i=m-1;i>0;i--)
    { 
        j=0;
        arr1[i][j]=arr[i-1][j];
            
    }
    
    //acheiving first row 00 to 0m
    for(j=0;j<n;j++)
    {   
        i=0;    
     arr1[i][j]=arr[i][j+1];
            
    }
    //acheiving last column 
    for(i=0;i<m-1;i++)
    {   
        j=n-1;    
     arr1[i][j]=arr[i+1][j];
            
    }
    //acheiveing last row
    
    for(j=n;j>0;j--)
    {   
        i=m-1;    
     arr1[i][j]=arr[i][j-1];
            
    }
    //inner box
    //first column
    
    for (i=m-2;i>=1;i--)
    { 
        j=1;
        arr1[i][j]=arr[i-1][j];
        
    }
    arr1[m-2][n-3+1]=arr[m-2][n-3];
    
    p++;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[i][j]=arr1[i][j];
        }
    }
   
    }while(p<=r);
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", arr1[i][j]);
            
        }
        printf("\n");
    }
        
    
    return 0;
}

