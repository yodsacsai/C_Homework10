#include"stdio.h"
#define line printf("---------------------------------\n");
main(){
	char name[50];
	int money;
	double benefit;
	
	line
	printf(" Program Benefit of loan\n");
	line
	printf(" Enter name of loan : ");
	scanf("%s",&name);
	printf(" Enter money of loan : ");
	scanf("%d",&money);
	line
	if( money >= 1000 ){
		benefit = (money/100)*2.5;
	}else{
		benefit = (money/100)*5.5;
	}
	printf(" Benefit of loan is : %.2lf\n",benefit);
	line
	
	
	
	
	getch();
}
