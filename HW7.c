#include"stdio.h"
#define line printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
main(){
	char name[20],tele[20];
	int number,pay;
	
	line
	printf("            Program Package Tour\n");
	line
	printf("Enter name of head group : ");
	scanf("%s",&name);
	printf("Enter telephone number of head group : ");
	scanf("%s",&tele);
	printf("Enter number of group : ");
	scanf("%d",&number);
	line
	
	if( number <= 2 ){
		pay = number*300;
	}else if( number >= 3 && number <= 5 ){
		pay = number*250;
	}else if( number >= 6 && number <= 10 ){
		pay = number*210;
	}else if( number >= 11 ){
		pay = number*150;
	}
	
	printf("Pay for package tour is : %d\n",pay);
	line
	
	
	
	
	getch();
}
