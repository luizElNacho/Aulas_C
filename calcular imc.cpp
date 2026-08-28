#include <stdio.h>

int main(){
	float peso, altura, imc;
	
	printf("Digite seu peso em kg: \n");
	scanf("%f", &peso);
	
	printf("Digite sua altura em metros: \n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("Seu IMC é: \n %.2f", imc);
	
	return 0;
}