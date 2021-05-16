/*print the pattern of the given string from middle element to the element before the middle in circular iteratiion
input: query
output: 
e$
er$
ery$
eryq$
eryqu$*/

#include<stdio.h>
#include<string.h>
int main(){
	char s[100]={0},gar[100]={0},n;
	int mid,i,j,k,p;
	printf("Enter the string: ");
	scanf("%s",&s);
	n=strlen(s);
	mid=(strlen(s)/2);
	for(i=0;i<n;i++){
		k=mid;
		if(mid<n){
		for(j=0;j<=k;j++,mid++)
			{
			gar[j]=s[mid];
			printf("%s$\n",gar);
			}
		}
		if(mid>=n)
		{
		for(j=k+1,p=0;j<n;j++,p++)	
			{
			gar[j]=s[p];
			printf("%s$\n",gar);
			}
		}
	}
		
	
	return 0;
}
