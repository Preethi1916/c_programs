#include<stdio.h>
int main(){
	int c,seat=10,n,ch,avail;
	do{
		printf("How can we help u?\n");
		printf("1.Booking\n");
		printf("2.Cancellation\n");
		printf("3.Availablity checking\n");
		printf("4.Prepare chart\n");
		printf("5.exit");
		scanf("%d",&c);
	
	switch(c)
	{
		case 1: 
			printf("\nTotal seats: %d",seat);
			printf("\nNumber of Seats: ");
			scanf("%d",&n);
			seat=booking(seat,n);
			yes_no();
			break;
		case 2:
			seat=cancel(seat,n);
			yes_no();
			break;
		case 3:
			avail=availablity(seat);
			yes_no();
			break;
		case 4: 
			chart(avail);
			yes_no();
			break;
		default:
			printf("exit %d",ch);
			yes_no();
			break;	
		
	}
	
	}while(ch!=0);
	return 0;
}
int booking(int seat, int n){
	seat=seat-n;

	return (seat);
}
int availablity(int seat){
	printf("\nNumber of Seats Available: %d",seat);
	
	return seat;
}
int cancel(int seat,int n){
	int can=0;
	printf("How many seats you want to Cancel? : ");
	scanf("%d",&can);
	if(can<=n)
		{
			seat=seat+can;
			printf("Successfully Canceled! ");
		}
	else
		printf("U r trying to cancel seats more than u booked! ");

	return seat;
}
int chart(int avail){
	int i,k;
	k=10-avail;
	for(i=0;i<10;i++){
		if (i<k)
		printf("\t * ");
		else
		printf("\n");
		printf("\t # ");
	}
	
	return 0;
}
int yes_no() {
	char option;
    scanf("%d", &option);

    while (option == 'y' || option == 'Y' || option == 'n' || option == 'N') 
	{
        if (option == 'y' || option == 'Y') {
            return 1;
        } else
        if (option == 'n' || option == 'N') {
            return 0;
        } else {
            printf("Only (Y)es or (N)o are acceptable");
        }
    }
}

