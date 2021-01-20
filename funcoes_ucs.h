#ifndef FUNCOES_UCS_H_INCLUDED
#define FUNCOES_UCS_H_INCLUDED

#include "aula.h"
#include "constantes.h"
char* obterString(char mensagem[MAX_STRING]);
int obterInteiro(char mensagem[MAX_STRING]);

void inserirNovoUC(tipoUc cadeiras[MAXIMO_UCS], int* numCadeiras);
void alterarUC(tipoUc cadeiras[MAXIMO_UCS], int* numCadeiras);
void listarUcs(tipoUc cadeiras[MAXIMO_UCS], int* numCadeiras);

void preencherNovaUc(tipoUc cadeiras[MAXIMO_UCS], int atualCod);
void mostrarUC(tipoUc cadeira);
void mostrarAulasUC(tipoUc cadeira);
#endif // FUNCOES_UCS_H_INCLUDED
