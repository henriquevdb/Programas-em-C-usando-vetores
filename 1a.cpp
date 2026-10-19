#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

	int a = 5, b = 8, c = 3;
	if( (a*2 > b/2) && (b*3 == c*5) ) {
	printf("%d\n%d\n%d", a*2, b/2, c*5); }
	else {
	printf("%d\n%d\n%d", c*5, a*2, b/2);
}

/*O saída é: 
 	15
 	10
 	4	*/

return 0;
}

