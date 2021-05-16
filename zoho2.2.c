#include<stdio.h>
#define MAX 100
int main(){
	char x[MAX],y[MAX],len1,len2,i,j,start,fin;
	printf("X Value: ");
	scanf("%s",&x);
	len1=strlen(x);
	printf("Y Value: ");
	scanf("%s",&y);
	len2=strlen(y);

	for(i=0;i<len1;i++)
	{
	for(j=0;j<len2;j++)
	{
		if(x[i]==y[j])
		{
			start=i;
			break;
		}
		break;
	}
	}
	
	for(i=start+1;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
		if(x[i]==y[j])
			fin=i+1;
	}
}
for(i=start;i<fin;i++)
{
	printf("%c",x[i]);
}
	return 0;
}
