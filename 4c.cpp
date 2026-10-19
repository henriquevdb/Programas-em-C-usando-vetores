#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i, real;

do{
	i++;
	printf("%i\n", i);
	real = real + i;
}while(i<1000);

printf("\n soma dos números de 1 a 1000: %i", real);

/*soma é 500500*/

return 0;
}

