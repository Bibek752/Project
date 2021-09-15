#include<stdio.h>
#include<conio.h>


void Motorcycle();
void Riksha();
void Bicycle();
void Bus();
void Showdetails();
void Delete();
void exit();
int nom,nor,nobi,nob,amount=0,count=0;


int main()
{  
   
  
    while(1)
   {
    
   switch(Menu())
{
	case 1:
		Motorcycle();
		break;
	case 2:
		Riksha();
		break;
	case 3:
		Bicycle();
		break;
	case 4:
		Bus();
		break;
	case 5:
		Showdetails();
		break;
	case 6:
		Delete();
		break;
	case 7:
		exit(0);
	default:
		printf("/n invalid choice");
	}
}
}


int Menu(){
	int ch;
	printf("\n1.  enter motorcycle");
	printf("\n2.  enter riksha");
	printf("\n3.  enter bicycle");
	printf("\n4.  enter bus");
	printf("\n5.  showdetails");
	printf("\n6.  delete data");
	printf("\n7.  exit");
	printf("\n\n  enter your choice");
	scanf("%d",&ch);
	return (ch);
				
}


void Delete(){
	nom=0;
	nor=0;
	nobi=0;
	nob=0;
	amount=0;
	count=0;
}


void Showdetails(){
	printf("\n no of motorcycle is %d",nom);
	printf("\n no of riksha is %d",nor);
	printf("\n no of bicycle is %d",nobi);
	printf("\n no of bus is %d",nob);
	printf("\n no of vehicles is %d",nom+nor+nobi+nob);
	printf("\n total no of amount is %d",amount);
}



void Motorcycle()
{
	printf("Entry successful");
	nom++;
	amount=amount+20;
	count++;
	
}


void Riksha()
{  
    printf("Entry successful");
	nor++;
	amount=amount+25;
	count++;
}


void Bicycle()
{
    printf("Entry successful");
	nobi++;
	amount=amount+15;
	count++;
}


void Bus()
{
	printf("Entry successful");
	nob++;
	amount=amount+40;
	count++;
}



