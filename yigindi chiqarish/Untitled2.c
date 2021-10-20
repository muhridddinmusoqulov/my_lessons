 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main ()
 
 {
 	
 	int magic;
 	int guess; /*Davron o'ylagan sonni topuvchi o'zgaruvchi*/
 	
 	magic = rand ()%100; /*Davron o'ylagan son 0dan 100 gacha */
 	
 	printf("Davron o'ylgan sonni toping:");
 	
 	scanf ("%d", &guess);
 	
 	if(guess ==magic)printf("**Right**");
 	
 	else printf("Wrong");
 	
 	return 0;
 }
