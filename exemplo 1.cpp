#include <stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
   char frase[500];

   int t=0;
   
   printf("Informe a frase: ");
   gets(frase);
   
   for(int idx =0; idx < 500; idx++){
    	if(frase[idx] == 'a' || frase[idx] == 'e' || frase[idx] == 'i' || frase[idx] == 'o' || frase[idx] == 'u'){
   	    	t ++;
   		  
	   }
	   if(frase[idx] == '\0'){
	   	    break;
	   }
   }
   printf("A frase digitada tem %d vogais", t);
 
 
    return 0;
}
