#include <stdio.h>


int main (){
	int sum = 0;
	int i;
	for(i = 0; i <= 10; i++){
		if(i % 2 == 1){
			sum += i;
			printf("%d toq son\n",i);
		}
		else {
			printf("yigindi %d \n",sum);
		}
		
	}
	return 0;
}
 
