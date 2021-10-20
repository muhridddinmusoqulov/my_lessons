#include <stdio.h>

int main (){
  int sev;
  int i;
  int sum = 0;

  scanf("%d \n", &sev);
  	
  for(i = 0; i <= sev; i++){
    sum += i;
  }
  printf("Summa: %d \n", sum);
  
  return 0;
  
}






