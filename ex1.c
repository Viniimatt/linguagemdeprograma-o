/*1. Fa�a um programa que receba quatro n�meros inteiros,
calcule e mostre a soma desses n�meros.
ALGORITMO
 DECLARE n1, n2, n3, n4, soma NUM�RICO
 LEIA n1, n2, n3, n4
 soma ? n1 + n2 + n3 + n4
 ESCREVA soma
FIM_ALGORITMO.
#include<stdio.h>*/


int main(){
	int n1, n2, n3, n4, soma;
	
	//entrada de dados
	printf("Digite o 1� n�mero: ");
	scanf("%d", &n1);
	printf("Digite o 2� n�mero: ");
	scanf("%d", &n2);
	printf("Digite o 3� n�mero: ");
	scanf("%d", &n3);
	printf("Digite o 4� n�mero: ");
	scanf("%d", &n4);
	
	//processando
	soma = n1 + n2 + n3 + n4;
	
	//sa�da de dados
	printf("A soma de todos os n�meros �: %d", soma);
}

