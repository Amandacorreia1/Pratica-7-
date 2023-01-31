#include <stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
   char frase[500];
   char a;

   int t=0;
   
   printf("Informe a frase ou palavra: ");
   gets(frase);
   
   printf("Digite uma letra: ");
   scanf("%s", &a);
   
   for(int idx =0; idx < 500; idx++){
    	if(frase[idx] == a){
   	    	t ++;
   		  
	   }
	   if(frase[idx] == '\0'){
	   	    break;
	   }
   }
   printf("A resposta é: %d", t);
 
 
    return 0;
}
