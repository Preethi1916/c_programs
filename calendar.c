#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int leap(int year) {
   


   // leap year if perfectly visible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
      return 1;
   }
   // not a leap year if visible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
      return 0;
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
      return 1;
   }
   // all other years are not leap year
   else {
      printf("%d is not a leap year.", year);
      return 0;
   }

}
void main(){
	int date,dateval, month, year,monthval,yearval1,yearval2,yearval3,yearval4,yearval5,finalyr,oddval1,oddval2,oddval3,week;
	printf("Enter the date: ");
	scanf("%d",&date);
	printf("Enter the month: ");
	scanf("%d",&month);
	printf("Enter the year: ");
	scanf("%d",&year);
	
	dateval=date%7;
	
	if(month=="1"){
		if(!leap(year)){
			monthval=6;
		}
		else{
			monthval=5;
		}
	}
	else if(month=="2"){
		if(!leap(year)){
			monthval=2;
		}
		else{
			monthval=1;
		}
	}
	else if(month=="3")
	monthval=2;
	else if(month=="4")
	monthval=5;
	else if(month=="5")
	monthval=0;
	else if(month=="6")
	monthval=3;
	else if(month=="7")
	monthval=5;
	else if(month=="8")
	monthval=1;
	else if(month=="9")
	monthval=4;
	else if(month=="10")
	monthval=6;
	else if(month=="11")
	monthval=2;8
	else if(month=="12")
	monthval=4;
	else
	printf("Enter the correct month");		
	if(year>800 && year<1200){
		yearval1=abs(year-800);
		oddval1=0;
		if(yearval1>100 && yearval1<200){
			yearval2=abs(100-yearval1);
			oddval2=5;
			yearval3=abs(yearval2/4);
			yearval4=abs(yearval2-yearval3);
			yearval5=abs(yearval4+yearval3);
			oddval3=yearval5%7;
			finalyr=abs(oddval1+oddval2+oddval3);
			
		}
		else if(yearval1>200 && yearval1<300){
			yearval2=|200-yearval1|;
			oddval2=3;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval1>300 && yearval1<400){
			yearval2=|300-yearval1|;
			oddval2=1;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval>400){
			yearval2=|400-yearval1|; 
			oddval2=0;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else
		printf("its belong to 800");
	}
	else if(year>1200 && year<1600){
		yearval1=|year-1200|;
		oddval1=0;
		if(yearval1>100 && yearval1<200){
			yearval2=|100-yearval1|;
			oddval2=5;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval1>200 && yearval1<300){
			yearval2=|200-yearval1|;
			oddval2=3;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval1>300 && yearval1<400){
			yearval2=|300-yearval1|;
			oddval2=1;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval>400){
			yearval2=|400-yearval1|; 
			oddval2=0;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else
		printf("its belong to 1200");
	}
	else if(year>1600 && year<2000){
		yearval1=|year-1600|;
		oddval1=0;
		if(yearval1>100 && yearval1<200){
			yearval2=|100-yearval1|;
			oddval2=5;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval1>200 && yearval1<300){
			yearval2=|200-yearval1|;
			oddval2=3;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval1>300 && yearval1<400){
			yearval2=|300-yearval1|;
			oddval2=1;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval>400){
			yearval2=|400-yearval1|; 
			oddval2=0;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else
		printf("its belong to 1600");
	}
	else if(year>2000&& year<2400){
		yearval1=|year-2000|;
		oddval1=0;
		if(yearval1>100 && yearval1<200){
			yearval2=|100-yearval1|;
			oddval2=5;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval1>200 && yearval1<300){
			yearval2=|200-yearval1|;
			oddval2=3;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval1>300 && yearval1<400){
			yearval2=|300-yearval1|;
			oddval2=1;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else if(yearval>400){
			yearval2=|400-yearval1|; 
			oddval2=0;
			yearval3=|yearval2/4|;
			yearval4=|yearval2-yearval3|;
			yearval5=|yearval4+yearval3|;
			oddval3=yearval5%7;
			finalyr=oddval1+oddval2+oddval3;
		}
		else
		printf("its belong to 2000");
	}
	else
	print("Enter the year within 2400");
	finalval=dateval+monthval+finalyr;
	week=finalval%7;
	if (week==0)
	printf("SUNDAY");
	else if(week==1)
	prinf("MONDAY");
	else if(week==2)
	printf("TUESDAY");
	else if(week==3)
	printf("WEDNESDAY");
	else if(week==4)
	printf("THURSDAY");
	else if(week==5)
	printf("FRIDAY");
	else if(week==6)
	printf("SATURDAY");
		
	}
