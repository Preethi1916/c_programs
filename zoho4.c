/* Given a two dimensional array of string like
 <”luke”, “shaw”>
 <”wayne”, “rooney”>
 <”rooney”, “ronaldo”>
 <”shaw”, “rooney”> */
 #include<stdio.h>
int main(){
	int i,j,k;
	char arr[]="LSWRRASR";
	char arr1[4][2],son,gson;
	int sum=0;
	k=0;
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			arr1[i][j]=arr[k];
			k++;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
				if(arr1[i][j]=='A'){
					son=arr1[i][j-1];
					printf("%c\n",son);
				}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
				if(arr1[i][j]==son){
					gson=arr1[i][j-1];
					printf("%c\n",gson);
					
				}
			}
}
for(i=0;i<4;i++){
		for(j=0;j<2;j++){
				if(arr1[i][j]==gson)
				{
					sum++;	
				}
			}
		}
		
		printf("%d\n",sum);
	return 0;	
}
