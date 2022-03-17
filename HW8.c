#include"stdio.h"
#define line printf("++++++++++++++++++++++++++\n");
main(){
	char name;
	double rent,water,elec,pay;
	int a;
	a = 1;
	
	
	line
	printf("   Program Rent Room\n");
	line
	while( a <= 10 ){
		printf("Room No.%d\n",a);
		printf("Enter name : ");
		scanf("%s",&name);
		switch( name ){
			case 'x' : 	a = a+1;
						printf("\n");
						break;
			default	: 	
						printf("Enter rent per room : ");
						scanf("%lf",&rent);
						printf("Enter unit water use : ");
						scanf("%lf",&water);
						printf("Enter unit electric use : ");
						scanf("%lf",&elec);
						pay = (water*12.5)+(elec*8)+rent;
						printf("Pay money total for rent room : %.2lf\n\n",pay);
						a = a+1;	
		}
		
	}
	
	
	
	
	
	
	
	getch();
}
