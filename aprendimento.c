#include<stdio.h>
void main(){
	char nome[20], sexo;
	int idade;
 printf ("digite seu nome,sexo m/f e idade:\n");
 scanf("%s %c %d", &nome, &sexo, &idade);
 if (sexo=='m'){
 	if (idade>65){
 	printf("o atendimento do paciente %s é prioritario", nome);
 	}else{
 		printf("o atendimento do paciente %s é normal", nome);
	 } 
 }else{
 	if(idade>60){
 		printf("o atendimento pa paciente %s é prioritario", nome);
	 }else{
	 	printf("o atendimento da paciente %s é normal", nome);
	 }
 }
 getch();
}