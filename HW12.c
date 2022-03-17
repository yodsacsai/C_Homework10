#include "stdio.h"
main(){
 int loop = 6;
 int i,j,k;
 int sloop = 1;
 int l =0;

 for(i=1;i<=loop;i++){
 	
  for(j=1;j<=sloop;j++){
    printf("X");
    
   }
        k++;
	  if(k == 3){
	  	l=1;
	  }
  
   if(l == 1){
   	sloop -=2;
   }
  else
  sloop +=2;
 printf("\n");
   
 }
 getch();
}

