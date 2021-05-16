#include <stdio.h>
#include<string.h>
#include <conio.h>
int main()
{
	char arr[10]={"prreetthi"},n=7,i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%c ",arr[i]);
			}
		}
	}
	return 0;
}
