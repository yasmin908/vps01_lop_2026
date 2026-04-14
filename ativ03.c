#include<stdio.h>
void main(){
	char nome[20], sexo, continuar;
	int cont= 0, m = 0, f = 0;
	do{
		printf("qual o seu  nome?");
		scanf("%s", &nome);
		printf("qual o sexo 'm' ou 'f': ");
		scanf("%c", &sexo);
		cont++;
		printf("você é o paciente número %d\n", cont);
		if(sexo== 'm') m++;
		else f++;
		printf("mais algum paciente 's' ou 'n' :");
		scanf("%c", &continuar);
	}while(continuar== 's');
	printf("hoje foram atendidos %d oacientes, %d masculino e %d feminino", cont, m ,f);
	getch();
	}