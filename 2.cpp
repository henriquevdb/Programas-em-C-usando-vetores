#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int A[15], B[15], i;

for(i=0; i<15 ; i++){
	printf("dê 15 elementos, %d de 15: ", (i+1));
	scanf("%i", &A[i]);
}
for(i=0; i<15 ; i++){
	B[i]=i*i;
	printf("\nA[%i] = B[%i]\n",i, B[i]);
}


return 0;
}

