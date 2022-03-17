#include"stdio.h"
#define line printf("+++++++++++++++++++++++++++++++++++\n");
main(){
	int i,a,h,age[a],hi175,hi160;
	double hi[h],sum_age,sum_hi,avr_age,avr_hi;
	
	sum_hi=0;
	sum_age=0;
	hi175=0;
	hi160=0;
	
	line
	printf("   Program Person Weight-Height\n");
	line
	for( i = 1 ; i <= 10 ; i = i + 1){
		printf("Person %d::\n",i);
		printf("Enter height : ");
		scanf("%lf",&hi[h]);
		printf("Enter age : ");
		scanf("%d",&age[a]);
		printf("\n");
		
		if(hi[h]>175&&age[a]>15){
			hi175= hi175+1;
		}
		if(hi[h]>160&&age[a]>20){
			hi160= hi160+1;
		}
		sum_hi = sum_hi + hi[h];
		sum_age = sum_age + age[a];
		avr_hi = sum_hi/i;
		avr_age = sum_age/i;
			
	}
	line
	printf("#Age > 15 and Height > 175 is : %d\n",hi175);
	printf("#Age > 20 and Height > 160 is : %d\n",hi160);
	printf("Average Height is : %.2lf\n",avr_hi);
	printf("Average age is : %.2lf\n",avr_age);
	line
	
	getch();
}
