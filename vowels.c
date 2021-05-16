#include<stdio.h>
#include<string.h>
int main(){
	char c[]="ACADEMY OF TECHNOLOGY";
	int len;
	len=strlen(c);
	printf("%d",len);
	for(i=0;i<len;i++){
		if((c[i]=='a'|| 'A')||(c[i]=='e'||'E')||(c[i]=='i'||'I')||(c[i]=='o'||'O')||(c[i]=='u'||'U')){
			c[i]=c[i+1];
	}
	}
	
	printf("%s",c);
	
	return 0;
}
