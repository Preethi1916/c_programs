#include<stdio.h>
#include<string.h>
int main(){
	int i,n,t=0;
	char arr[100];
	scanf("%s",&arr);
	n=strlen(arr);
	for (i=0;i<n;i++){
		if(arr[i]=='('){
			t++;
		}
		else if(arr[i]==')'){
			t--;
		}
		else if((arr[i]=='+') || (arr[i]=='-') || (arr[i]=='*') || (arr[i]=='/'))
		{
			if((arr[i-1]>96) && (arr[i-1]<123) && (arr[i+1]>96) && (arr[i+1]<123))
			{
			}
			else 
				break;
		}
		
	}
	if(i==n && t==0)
		printf("Valid");
	else
		printf("Unvalid");
	return 0;
}
