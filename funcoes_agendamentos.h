#ifndef FUNCOES_AGENDAMENTOS_H_INCLUDED
#define FUNCOES_AGENDAMENTOS_H_INCLUDED

#include "aula.h"
#include "constantes.h"

void inserirNovoAgendamentoOnline(tipoAulaOnline *aulasOnline);
void alterarAgendamentoOnline(tipoAulaOnline *aulasOnline);
void listarAgendamentosOnline(tipoAulaOnline *aulasOnline);
void marcarInicioAulaAgendada(tipoAulaOnline *aulasOnline);
void marcarFimAulaAgendada(tipoAulaOnline *aulaOnline);

void preencherNovoAgendamentoOnline(tipoAulaOnline *aulasOnline, int atualCod);

void obterString(char mensagem[MAX_STRING], char* atributoAPreencher);
int obterInteiro(char mensagem[MAX_STRING]);
#endif // FUNCOES_AGENDAMENTOS_H_INCLUDED
