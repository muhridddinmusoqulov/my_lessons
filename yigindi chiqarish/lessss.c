 #include <stdio.h>
 
 
 int main(){
 	
 	int sum = 0;
 	int i;
 	for(i =0; i <= 10; i++){
 		if(i % 2 ==0){
 			sum += i;
 			printf("%d Juft son \n",sum);
 		}
 		else{
 			printf("toq son %d \n",i);
 			
 		}
 	}
 	
 	return 0;
 }
