#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i, real, A[1000];

for(i=1 ; i<=1000 ; i++){
	A[i]=i+1;
	real = real + A[i];
	printf("%i\n",i);
}

printf("\nsoma dos números de 1 a 1000: %i", real);

/*soma é 500500*/

return 0;
}

