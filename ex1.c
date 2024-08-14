/*1. Faça um programa que receba quatro números inteiros,
calcule e mostre a soma desses números.
ALGORITMO
 DECLARE n1, n2, n3, n4, soma NUMÉRICO
 LEIA n1, n2, n3, n4
 soma ? n1 + n2 + n3 + n4
 ESCREVA soma
FIM_ALGORITMO.
#include<stdio.h>*/


int main(){
	int n1, n2, n3, n4, soma;
	
	//entrada de dados
	printf("Digite o 1° número: ");
	scanf("%d", &n1);
	printf("Digite o 2° número: ");
	scanf("%d", &n2);
	printf("Digite o 3° número: ");
	scanf("%d", &n3);
	printf("Digite o 4° número: ");
	scanf("%d", &n4);
	
	//processando
	soma = n1 + n2 + n3 + n4;
	
	//saída de dados
	printf("A soma de todos os números é: %d", soma);
}

