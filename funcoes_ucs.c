#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_ucs.h"

//----------------FUNCÇÕES PRINCIPAIS------------------------

void inserirNovoUC(tipoUc cadeiras[MAXIMO_UCS], int* numCadeiras){
	int i, atualCod;
	for(i = 0; i <= *numCadeiras + 1; i++){
		atualCod = i + 1;
		if(cadeiras[i].cod == 0){
			preencherNovaUc(cadeiras, atualCod);
			i = *numCadeiras + 2;
		}
	}
	numCadeiras = atualCod;
}

void alterarUC(tipoUc cadeiras[MAXIMO_UCS], int* numCadeiras){
	//listar ucs, selecionar uc para alterar
	if(&numCadeiras > 0){
		int op;
		do{
			listarUcs(cadeiras, &numCadeiras);
			scanf("%d",&op);
		}while(op < 1 || op > &numCadeiras);
		preencherNovaUc(&cadeiras[op-1], &numCadeiras);
	}else{
		printf("Nao ha cadeiras para alterar");
	}

}

void listarUcs(tipoUc cadeiras[MAXIMO_UCS], int* numCadeiras){
	int indice;
	for(indice = 0; indice <= &numCadeiras; indice++){
		printf("\n%d- ",indice + 1);
		mostrarUC(cadeiras[indice]);
		//mostrar quantidade de aulas por cada tipo de aula (agendadas, não as ocorridas)
		//mostrar o tipo de aula, data e hora de inicio da aula agendada
		mostrarAulasUC(cadeiras[indice]);
	}
}

//----------------FUNÇÕES AUXILIARES-------------------------

void preencherNovaUc(tipoUc cadeiras[MAXIMO_UCS],int atualCod){
	int j;
	tipoUc *cadeiraAPreencher;
	cadeiraAPreencher = (tipoUc*)malloc(sizeof(tipoUc));
	cadeiraAPreencher->designacao = NULL;
	cadeiraAPreencher->tipo = NULL;
	if(cadeiraAPreencher == NULL){
		printf("Memoria Insuficiente");
	}else{
		cadeiraAPreencher->cod = atualCod;

		cadeiraAPreencher->designacao = obterString("Designacao da UC:");
		cadeiraAPreencher->tipo = obterString("Tipo da UC:");
		cadeiraAPreencher->semestre = obterInteiro("Semestre da UC:");
		for(j = 0; j < 3; j++){
			cadeiraAPreencher->aulas[j].tipo = obterString("Aulas do tipo:");
			cadeiraAPreencher->aulas[j].duracao = obterInteiro("Duracao do tipo de aula:");
			cadeiraAPreencher->aulas[j].quantidade = obterInteiro("Quantidade de aulas:");
		}
		//mostrarUC(*cadeiraAPreencher);
		cadeiras[atualCod] = *cadeiraAPreencher;
		mostrarUC(cadeiras[atualCod]);
		//free(cadeiraAPreencher);
	}
}

char *obterString(char mensagem[MAX_STRING]){
	char buffer[50];
	char * atributoAPreencher;

	printf("\n%s",mensagem);
	scanf("%s", buffer);

	atributoAPreencher = malloc(strlen(buffer) * sizeof(char));

	if(atributoAPreencher == NULL){
		printf("Memoria Insuficiente");
	}else{

		strcpy(atributoAPreencher, buffer);
	}
	//free(atributoAPreencher);
	return atributoAPreencher;
}

int obterInteiro(char mensagem[MAX_STRING]){
	int valor;
	printf("\n%s ", mensagem);
	scanf("%d", &valor);
	return valor;
}

void mostrarUC(tipoUc cadeira){
	int j;
	printf("\n%d", cadeira.cod);
	printf("\n%s", cadeira.designacao);
	printf("\n%s", cadeira.tipo);
	/*printf("\n%d", cadeira.semestre);
	for(j = 0; j < 3; j++){
		printf("\n%s", cadeira.aulas[j].tipo);
		printf("\n%d", cadeira.aulas[j].quantidade);
		printf("\n%d", cadeira.aulas[j].duracao);
	}*/
}

void mostrarAulasUC(tipoUc cadeira){
	printf("POR COMPLETAR");
}
