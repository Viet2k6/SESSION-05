#include<stdio.h>

int main(){
	int n;
	int sum=0;
	
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++){
		sum = sum+i;
		
	}
	printf("ket qua la : %d",sum);
	

   return 0;
}
