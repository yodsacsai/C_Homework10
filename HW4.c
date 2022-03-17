#include"stdio.h"
#define line printf("+++++++++++++++++++++++++++++++\n");
main(){
	char name[20];
	char number[20];
	double pay;
	int hour;
	
	line
	printf("    Program Rent Texi\n");
	line
	printf("Enter name for rent : ");
	scanf("%s",name);
	printf("Enter car number for rent :");
	scanf("%s",&number);
	printf("Enter hour for rent : ");
	scanf("%d",&hour);
	
	if( hour <= 5 ){
		pay = hour*100;
	}else if( hour >= 6 && hour <= 10 ){
		pay = (hour*90.50);
	}else if( hour >= 11 && hour <= 15 ){
		pay = (hour*80);
	}else if( hour >= 16){
		pay = (hour*70.50);
	}
	line
	printf("Pay for rent is : %.2lf\n",pay);
	line
	
	
	
	getch();
}
