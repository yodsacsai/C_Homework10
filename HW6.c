#include"stdio.h"
#define line printf("--------------------------\n");
main(){
	int year;
	double check1,check2,check3;
	
	line
	printf("  Program Check Leap Year\n");
	line
	printf(" Enter year : ");
	scanf("%d",&year);
	line
	
	check1 = year%4;
	check2 = year%100;
	check3 = year%400;
	
	if( check1 != 0){
		printf("Year is not leap year\n");
	}else if( check1 == 0 && check2 != 0 ){
		printf("Year is leap year\n");
	}else if( check2 == 0 && check3 == 0){
		printf("Year is leap year\n");
	}else if( check2 == 0 && check3 != 0){
		printf("Year is not leap year\n");
	}
	line
	
	
	getch();
}
