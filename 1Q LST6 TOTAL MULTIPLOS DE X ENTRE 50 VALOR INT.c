/*QUEST�O 01: 
Fa�a um programa que leia um n�mero inteiro x e, em seguida, solicite ao usu�rio outros 50 valores inteiros. 
Ao final, o programa deve exibir o total de m�ltiplos de x fornecidos.*/

#include<stdio.h>
int main(){
	
	int i, x, valor, cont=0;
	
	printf("NUMERO INTEIRO: ");
	scanf("%d", &x);
	
	for(i=1;i<=50;i++){
		printf("ENTRE COM UM VALOR: ");
		scanf("%d", &valor);
		if(valor%x==0){
			cont++;
		}
	}
	printf("\n\nO total de multiplos de X e: %d", cont);
}
