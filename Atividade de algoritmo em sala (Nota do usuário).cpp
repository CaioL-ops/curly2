#include<stdio.h>

   int main(){
   	char nomeDoUsuario[40];
   	int contador;
   	
   	printf("Digite o nome do usuario: ");
   	fgets(nomeUsuario, 100, stdin);
   	
   	for(int contador = 1; contador <= 5000; contador = contador + 1){
   	printf("Eu, %s, vou passar em algoritmo com média 10! %i\n", nomeDoUsuario, contador);
	   }
	return 0;
   }
