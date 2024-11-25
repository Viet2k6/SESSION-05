#include<stdio.h>

int main(){
 int correctAnswer=15;
 int guess;
 
     while(guess != correctAnswer){
     	
     	printf("Moi nhap so can doan: ");
        scanf("%d", &guess);
	     if (guess == correctAnswer){
		 printf("Chuc mung, ban da doan dung!");
		 }
	 }
 
   return 0;
}
