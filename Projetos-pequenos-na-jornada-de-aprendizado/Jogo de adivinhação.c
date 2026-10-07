#include <stdio.h>

int main(){
	 // imprime o cabeçalho para o jogo de adivinhação
	printf("##########################################\n");
	printf("#### Bem-Vindo ao jogo de adivinhacao ####\n");	
	printf("##########################################\n");
   // Criando uma variável chamada numeroSecreto e atribuindo o tipo int, e atribuindo o valor 42 a variavel criada
	int numeroSecreto = 42;
   // Criando uma variável chamada chute e atribuindo o tipo int
	int chute;
   // parte final do codigo onde tudo é lido e imprimido na tela
	printf("Qual e o seu chute?");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);
}
