/*
QUEST�O 01 lista 2: 

O IMC (�ndice de Massa Corporal) � um crit�rio da Organiza��o Mundial de Sa�de para dar uma indica��o sobre a condi��o de 
peso de uma pessoa adulta. A f�rmula �:

IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condi��o de acordo com a tabela abaixo:

IMC em adultos                                          Condi��o

IMC < 18,5                                           Abaixo do peso
18,5 <= IMC < 25,0                                      Peso ideal
25,0 <= IMC < 30,0                                      Sobrepeso
30,0 <= IMC < 35,0                                   Obesidade grau I
35,0 <= IMC < 40,0                                  Obesidade grau II
IMC => 40,0                                         Obesidade grau III
*/
#include<stdio.h>
int main(){
	
	float peso, altura, imc;
	
	printf("Peso: ");
	scanf("%f", &peso);
	
	printf("altura: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
		
	if(imc<18.5){
		printf("%.2f = Abaixo do peso.", imc);
	}
	else{
		if(18.5<=imc<25){
			printf("%.2f = Peso ideal.", imc);
		}
		else{
			if(25<=imc<30){
				printf("%.2f = Sobrepeso.", imc);
			}
			else{
				if(30<=imc<35){
					printf("%.2f = Obesidade grau I.", imc);
				}
				else{
					if(35.0<=imc<40){
						printf("%.2f = Obesidade grau II.", imc);
					}
					else{
						imc>=40;
						printf("%.2f = Obesidade grau III.", imc);
					}
				}
			}
		}
	}
}
