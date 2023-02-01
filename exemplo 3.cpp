#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	char x[500], inverso_x[500] = "";
	
	printf("Digite a string: ");
	gets(x);
	
	int max = strlen(x) - 1;
	
	for(int i = 0; i<=max; i++){
		inverso_x[i] = x[max - i];
	}
	
	printf("A string invertida é: %s", inverso_x);
	
	
	return 0;	
}
