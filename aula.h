#ifndef AULA_H
#define AULA_H


/** ------------------------ Estruturas de dados ----------------------- **/
typedef struct{
	int ano,mes,dia;
} tipoData;

typedef struct{
	int h,m,s;
} tipoTempo;

//MUDAR tipoAula para tipoAgendamento e adicionar prop, do tipoData e tipoHora
typedef struct {
	char* tipo;
	int duracao;
	int quantidade;
} tipoAula;

typedef struct{
	int cod;
	char* designacao;
	char* tipo;
	int semestre;
	tipoAula aulas[3];
} tipoUc;

typedef struct{
	char* designacao; //unica
	int codigo; //codigo
	char* tipo;
	char* docente;
	tipoData data;
	tipoTempo horaInicio, horaFim;
	char estado;
	char opcaoGravacao;
	int *numeroEstudante
} tipoAulaOnline;
#endif // AULA_H
