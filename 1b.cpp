#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int a = -3;

while( a <= 3 ) {
	printf("%d\t", a);
if ( a % 2 == 0 ) {
	printf("\n");
	}
	a = a + 1;
	}

/*a saída é: 
-3		-2
-1		0
 1		2
 3			*/

return 0;
}

