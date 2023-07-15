#include <stdio.h>
#include <math.h>

int main (){
  int smal = 0;
  int num[4];
  int i = 0;
 
  printf("Enter 4 numbers whose sum is 0\n");
 
  scanf("%d", &num[0]);
  scanf("%d", &num[1]);
  scanf("%d", &num[2]);
  scanf("%d", &num[3]);


  
   
  if( num[0] + num[1] + num[2] + num[3] == 0) {
	while(i < 4){
         if(smal < num[i]){
	     	smal = num[i];       
	}
        i = ++i;	 
     }
       printf("smal number is: %d\n", smal);	
  }else{
	  printf("the sum of the numbers is not 0\n");
  }
	return 0;
}
