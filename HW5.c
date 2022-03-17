#include"stdio.h"
#define line printf("-------------------------------\n");
main(){
	char number[20];
	double unit,pay;
	
	line
	printf("      Program Pay Water\n");
	line
	printf(" Enter home number : ");
	scanf("%s",&number);
	printf(" Enter unit of water use : ");
	scanf("%lf",&unit);
	line
	
	if( unit <= 20){
		pay = unit*5;
	}else if( unit > 20 && unit < 50 ){
		pay = unit*3.5;
	}else if( unit >= 50 ){
		pay = unit*3;
	}
	
	printf(" Pay of water use is : %.2lf \n",pay);
	line
	
	
	
	
	getch();
}
