#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	char a[500];
	
	printf("Digite a string: ");
	gets(a);
	
	char aux;
	int max = strlen(a) - 1;

	for(int i = 0; i<=max/2; i++){
		aux = a[i];
		a[i] = a[max - i];
		a[max- i] = aux;
		
	}
	
	printf("A string invertida é: %s", a);


    return 0;
}
