/*QUESTÃO 01:
Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores a N.*/

#include<stdio.h>
int main(){
	
	int N, i;
	
	printf("ENTRE COM UM NUMERO INTEIRO: ");
	scanf("%d", &N);
	
	for(i=1;i<=N;i++){
		if(i%2==0){
			printf("%d, ", i);
		}
	}
}
