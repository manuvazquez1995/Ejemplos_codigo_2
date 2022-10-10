#include <conio.h>
#include <stdio.h>

int funcionSuma(int a, int b);

void main(){
	int n1;
	int n2;
	int suma;
	
	printf("\n Introduzca primer numero.");
	scanf("%d", &n1);
	printf("\n Introduzca segundo numero.");
	scanf("%d", &n2);
	
	suma = funcionSuma(n1,n2);
	printf("\n La suma es: %d", suma);
	
}


int funcionSuma(int a, int b){
	return a + b;
	
}