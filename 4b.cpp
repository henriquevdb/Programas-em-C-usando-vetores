#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int i=0, real;

while(i<1000){
	i++;
	real = real + i;
	printf("%i\n", i);
}

printf("\nsoma dos números de 1 a 1000: %i", real);

/*soma é 500500*/

return 0;
}

