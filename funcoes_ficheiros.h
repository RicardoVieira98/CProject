#ifndef FUNCOES_FICHEIROS_H_INCLUDED
#define FUNCOES_FICHEIROS_H_INCLUDED

#include "aula.h"
#include "constantes.h"
void lerDadosUcsBinario(tipoUc* cadeiras);
void lerDadosAulasOnlineBinario(tipoAulaOnline* aulasOnline);

void atualizarDadosUcsBinario(tipoUc cadeiras);

void atualizarDadosAulasOnlineBinario(tipoAulaOnline aulasOnline);

void registarAcessoTexto(int numEstudante, tipoAula aula, char* tipoAcesso);

void registarAcessoBinario(int numEstudante, tipoAula aula, char* tipoAcesso);

#endif // FUNCOES_FICHEIROS_H_INCLUDED
