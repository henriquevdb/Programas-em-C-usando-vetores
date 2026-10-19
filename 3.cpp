#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i, A[5], B[5];

for( i = 0; i < 5; i++ ) {
	scanf("%d", &A[i]);
	
	if ( A[i] % 2 == 0 ) {
		B[i] = 1;
	}
	
	else {
		B[i] = 0;
		}
}

for( i = 0; i < 5; i++ ) {
	printf("%d\t", B[i]);
	}
	
	/*esse código representa a porta 1 se o número for par e a porta 0 caso seja impar,
	como nos códigos binários. A sua saída com os número 10, 5, 17, 2, 4. é 1 0 0 1 1
	onde os 1 se apresentam onde o número é par e 0 onde é impar */
	
	/*1 	0		0		1		1*/

return 0;
}

