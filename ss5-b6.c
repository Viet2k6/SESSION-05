#include<stdio.h>

int main(){
	float firstNumber,secondNumber;
	printf("Moi nhap 2 so bat ki: ");
	scanf("%f %f",&firstNumber, &secondNumber);
	
	int i=0;
	int calc;
	float sum=firstNumber+secondNumber;
	float minus=firstNumber-secondNumber;
	float multy=firstNumber*secondNumber;
	float divide=firstNumber/secondNumber;

	
	while(i==0){
	  printf("\n 1.Tong 2 so\n 2.Hieu 2 so\n 3.Tich 2 so\n 4.Thuong 2 so\n 5.Thoat\n");
	  scanf("%d",&calc);
	  
	  switch(calc){
	  	case 1: 
		  
		        printf("%.1f + %.1f = %.1f\n", firstNumber, secondNumber, sum);
		        break;
	    case 2:
                printf("%.1f - %.1f = %.1f\n", firstNumber, secondNumber, minus);
                break;
        case 3:
                printf("%.1f * %.1f = %.1f\n", firstNumber, secondNumber, multy);
                break;
        case 4:
		        printf("%.1f / %.1f = %.1f\n", firstNumber, secondNumber, divide); 
				break;
	    case 5:
		       printf("Thoat\n");
               i = 1;       
		  }
	}
	  
	  
	  return 0;
}
