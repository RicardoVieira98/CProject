#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_agendamentos.h"

//----------------FUNCÇÕES PRINCIPAIS------------------------

void inserirNovoAgendamentoOnline(tipoAulaOnline *aulasOnline){
	int i;
	aulasOnline = malloc(sizeof(tipoAulaOnline));
	if(aulasOnline == NULL){
		printf("Memoria Insuficiente");
	}else{
		for(i = 0; i <= i + 1; i++){ //Nao ha maximo de aulas online, que limitador uso?
			if(aulasOnline[i].designacao != NULL){
				preencherNovoAgendamentoOnline(aulasOnline, i);
			}
		}
	}
}

void alterarAgendamentoOnline(tipoAulaOnline *aulasOnline){

}

void listarAgendamentosOnline(tipoAulaOnline *aulasOnline){

}

void marcarInicioAulaAgendada(tipoAulaOnline *aulasOnline){

}

void marcarFimAulaAgendada(tipoAulaOnline *aulaOnline){

}

//----------------FUNÇÕES AUXILIARES-------------------------

void preencherNovoAgendamentoOnline(tipoAulaOnline *aulasOnline, int atualCod){

}

//void obterString(char mensagem[MAX_STRING], char* atributoAPreencher){
//	char buffer[50];
//	printf("\n%s",mensagem);
//	scanf("%s", buffer);

//	atributoAPreencher = malloc(strlen(buffer) * sizeof(char));
//	if(atributoAPreencher == NULL){
//		printf("Memoria Insuficiente");
//	}else{
//		strcpy(atributoAPreencher, buffer);
//	}
	//free(atributoAPreencher);
//}

//int obterInteiro(char mensagem[MAX_STRING]){
//	int valor;
//	printf("\n%s ", mensagem);
//	scanf("%d", &valor);
//	return valor;
//}
