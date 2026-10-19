#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int a = 1, b = 8;

do {
	printf("%d : %d\n", a, b);
	a++;
	b--;
} while( a <= b );


/*A saída é:
 1 : 8
 2 : 7
 3 : 6
 4 : 5*/

return 0;
}

