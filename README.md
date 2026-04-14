# Título: vps01
## Subtítulo: Verificação Prática Somativa 01
Arquivos gerados durante a avaliação de lógica de programação, algoritmos e fluxogramas

## Tecnologias

|Tecnologias| Utilidade
|:-:|-|
|Linguagem **C**|desenvolvimento|
|IDE| Embarcadeiro **Dev C++** |
|[Draw.io](https://app.diagrams.net/)|para desenhar os *fluxogramas*|
|Bloco de notas para|*Portugol* lógica|

- ## como testar
- 1 Clone esse rwpositório
- 2 Abra os arquivos .C com o Dev C++
- 3 Pressione F11 para compilar executar

  ## Exemplo de código
```c
#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	char nome[20], sexo;
	int idade;
	printf("Digite seu nome, sexo m/f e idade\n");
	scanf(" %s %c %d", &nome, &sexo, &idade);
	if(sexo == 'm'){
		if(idade > 65){
			printf("O atendimento do paciente %s é prioritário", nome);
  		}else{
		  	printf("O atendimento do paciente %s é normal", nome);
  		}
   }else{
      if(idade > 60){
	  	printf("O atendimento do paciente %s é prioritário", nome);
      }else{
      	printf("O atendimento do paciente %s é normal", nome);
	  }
    }
    getch();
}
```
