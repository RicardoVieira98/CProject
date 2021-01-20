#include <stdio.h>
#include <stdlib.h>
#include "funcoes_auxiliares.h"
#include "funcoes_ucs.h"

/** ------------------------ Funções dos menus ----------------------- **/
int menu();
int menuUcs();
int menuAgendamentos();
int menuEstatisticas();
int menuFicheiros();

int main(void){
	int opcao,opcao2;
	int numCadeiras = 0; // modificavel aquando verificacao do ficheiro onde reside info sobre ucs
	tipoUc cadeiras[MAXIMO_UCS] = {}; //RESIDE NUM FICHEIRO E É LIDO QUANDO COMECA A APP
	tipoAulaOnline *aulasOnline; //RESIDE NUM FICHEIRO E É LIDO QUANDO COMECA A APP
	do{
		opcao = menu();
		switch(opcao){
		case 1:
			do{
			opcao2 = menuUcs();
				switch(opcao2){
				case 1:
					inserirNovoUC(cadeiras, &numCadeiras);
					break;
				case 2:
					alterarUC(cadeiras, &numCadeiras);
					break;
				case 3:
					listarUcs(cadeiras, &numCadeiras);
					break;
				}
			}while(opcao2 != 0);
			break;
		case 2:
			do{
			opcao2 = menuAgendamentos();
				switch(opcao2){
				case 1:
					//inserirNovoAgendamentoOnline(&aulasOnline);
					break;
				case 2:
					//alterarAgendamentoOnline(&aulasOnline);
					break;
				case 3:
					//listarAgendamentosOnline(&aulasOnline);
					break;
				case 4:
					//marcarInicioAula(&aulasOnline);
					break;
				case 5:
					//marcarFimAulaAgendada(&aulaOnline);
					break;
				}
			}while(opcao2 != 0);
			break;
		case 3:
			//opcao2 = menuEstatisticas();
			break;
		case 4:
			//opcao2 = menuFicheiros();
			break;
		}
	}while(opcao != 0);
    return 0;
}
int menu(){
	int opcao;
	do{
		printf("\n\n---------------- Gestao das aulas-online ----------------\n\n");
		printf("\t1 - UCs\n\t2 - Agendamentos\n\t3 - Estatisticas\n\t4 - Ficheiros\n\n\t0 - Sair\n\n");
		printf("Indique a opcao:");
		scanf(" %d", &opcao);
	}while(opcao < 0 || opcao > 4);
	return opcao;
}
int menuUcs(){
	int opcao;
	do{
		printf("\n\n---------------- Menu UCs ----------------\n\n");
		printf("\t1 - Criar UC\n\t2 - Editar UC\n\t3 - Listar UCs\n\n\t0 - Sair\n\n");
		printf("Indique a opcao:");
		scanf(" %d", &opcao);
	}while(opcao < 0 || opcao > 3);
	return opcao;
}
int menuAgendamentos(){
	int opcao;
	do{
		printf("\n\n---------------- Menu Agendamentos ----------------\n\n");
		printf("\t1 - Agendar \n\t2 - Alterar Agendamento\n\t3 - Listar Agendamentos\n\n\t0 - Sair\n\n");
		printf("Indique a opcao:");
		scanf("\t\tIndique a opcao:%d", &opcao);
	}while(opcao < 0 || opcao > 3);
	return opcao;
}
int menuEstatisticas(){
	int opcao;
	do{
		printf("\n\n---------------- Menu Estatisticas ----------------\n\n");
		printf("\t1 - Media de presencas em cada aula online realizada\n\t2 - Percentagem de UCs com aulas gravadas\n\t3 - UC(s) com a menor quantidade de aulas online realizadas\n\t4 - Tipo(s) de aula(s) com a maior quantidade de acessos as gravaçoes\n\t5 - Aula(s) online realizada(s) ha mais tempo\n\t0 - Sair\n\n");
		printf("Indique a opcao:");
		scanf(" %d", &opcao);
	}while(opcao < 0 || opcao > 5);
	return opcao;
}
int menuFicheiros(){
	int opcao;
	do{
		printf("\n\n---------------- Menu Ficheiros/Registos ----------------\n\n");
		printf("\t1 - Registar Acesso Texto\n\t2 - Registar Acesso Binário\n\n\t0 - Sair\n\n");
		printf("Indique a opcao:");
		scanf(" %d", &opcao);
	}while(opcao < 0 || opcao > 4);
	return opcao;
}
