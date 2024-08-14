/*2. Faça um programa que receba três notas, calcule e
mostre a média aritmética.
ALGORITMO
 DECLARE nota1, nota2, nota3, media NUMÉRICO
 LEIA nota1, nota2, nota3
 media ? (nota1 + nota2 + nota3)/3
 ESCREVA media
FIM_ALGORITMO.
#include<stdio>*/

int main(){
	int n1, n2, n3, media;
	
	//entrada de dados
	printf("Digite o 1° numero: ");
	scanf("%d", &n1);
	printf("Digite o 2° numero: ");
	scanf("%d", &n2);
	printf("Digite o 3° numero: ");
	scanf("%d", &n3);
	
	//processando
	media = (n1 + n2 + n3)/3;
	
	//saída de dados
	printf("a media = %d", media);
	}

