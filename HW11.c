#include "stdio.h"
main(){
 	int loop = 6;
 	int i,j;
 
 	for(i=1;i<=loop;i){
  		for(j=1;j<=loop;j++){
    		printf("M");
   		}
  		loop--;
  		printf("\n"); 
 	}
 
	getch();
}
