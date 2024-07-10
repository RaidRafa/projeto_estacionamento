#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void Registro();


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	printf("-------------------------------------------\n\n");
	printf("-------------Seja bem vindo!!--------------\n");
	
	system("pause");
	system("cls");
	
	while(1){
	printf("Escolha uma das opções:\n\n");
	printf("\t1 - Registrar entrada\n");
	printf("\t2 - Imprimir nota\n");
	printf("\t3 - Sair do programa\n");
	printf("Escolha: \n");
	
	system("pause");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			Registro();
			break;
			
		case 2:
			Imprimir();
			break;
			
		case 3:
			Sair();
			break;		
	}
	
	}
	
	return 0;
}


void Registro(){
	
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");
	
	float horaEntrada;
	char nome[50];
	int CPF;
	char carro[50];
	
	printf("Insira o nome e o CPF do cliente:\n");
	scanf("%49s %d", &nome, &CPF);
	
	printf("Modelo de carro:\n");
	scanf("%49s", &carro);
	
	printf("Hora de entrada:\n");
	scanf("%f", &horaEntrada);
	
	
	system("cls");
	
	printf("Cliente registrado!!\n");
	system("pause");
	system("cls");
	
	return;
	
}
