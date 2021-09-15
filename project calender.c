#include<stdio.h>




int _1st_day(int year){
	int k;
	k=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
	return k;
}



int main()
{


int year,i,daysInMonth,day,weekDay=0,startingDay;
printf("Enter a  year");
scanf("%d",&year);


char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

//leap year case
if((year%4==0 && year%100!=0) || year%400==0)
monthDay[1]=29;


startingDay=_1st_day(year);



for(i=0;i<12;i++){
	
	daysInMonth=monthDay[i];
	printf("\n\n----------%s----------\n",months[i]);
	printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
	
	
	for(weekDay=0;weekDay<startingDay;weekDay++){
		printf("     ");
	}
	for(day=1;day<=daysInMonth;day++){
		printf("%5d",day);
		
		if(++weekDay>6)
		   {
		   	printf("\n");
		   	weekDay=0;
		   }
		    startingDay=weekDay;
	}
	
	
}

}
