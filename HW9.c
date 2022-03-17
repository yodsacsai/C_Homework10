#include"stdio.h"
#define line printf("++++++++++++++++++++++++++++\n");
main(){
	int num_total,i,min,max,num[i];
	double sum,avr;
	min = 999999999;
	max = 0;
	sum = 0;
	avr = 0;
	
	line
	printf("      Program Number\n");
	line
	printf("Enter number total : "); 
	scanf("%d",&num_total);
	line
	for(i = 1;i <= num_total;i = i+1){
		printf("Number %d : ",i); 
		scanf("%d",&num[i]);
		if(num[i]>max){
			max = num[i];
		}
		if(num[i]<min){
			min = num[i];
		}
		sum = sum + num[i];
		avr = sum/num_total;
	}
	line
	printf("Minimum number is : %d\n",min);
	printf("Maximum number is : %d\n",max);
	printf("Sum number is     : %.2lf\n",sum);
	printf("Average number is : %.2lf\n",avr);
	line
	
	
	
	
	
	getch();
}
