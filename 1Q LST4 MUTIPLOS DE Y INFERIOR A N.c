/*QUESTÃO 01: 
Faça um programa que leia um número inteiro positivo N e exiba todos os múltiplos de Y 
inferiores a N, onde N e Y são fornecidos pelo usuário.
*/
#include<stdio.h>
int main(){
	
	int n, y, i, multiplos=0, multi=0;
	
	printf("Valor de N (No inteiro): ");
	scanf("%d", &n);
	
	printf("Valor de Y (No inteiro): ");
	scanf("%d", &y);
		
	for(i=1;i<n;i++){
		if(i%y==0){
			printf("%d ", i);
		}
	}
}
