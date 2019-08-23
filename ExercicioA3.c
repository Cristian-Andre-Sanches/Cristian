
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXTAM 3

typedef struct {
  int key;
} Objeto;

typedef struct {
  Objeto vetor[MAXTAM];
  int topo;
} pilhaEstatica;


void iniciaPilha(pilhaEstatica *p){
    p->topo=0;
}

bool estaVazia(pilhaEstatica *p){
   bool resultado = (p->topo == 0);
   return (resultado);
}

bool estaCheia(pilhaEstatica *p){

   bool resultado = (p->topo == MAXTAM);
   return (resultado);
}

void empilha(Objeto x, pilhaEstatica *p){
    if( !estaCheia(p)){
        p->vetor[(*p).topo]=x;
        p->topo=p->topo + 1;
    } else {
        printf("Esta Cheio\n");
    }
}

void desempilha(Objeto *x, pilhaEstatica *p);

int tamanhoPilha(pilhaEstatica *p);

Objeto topo(pilhaEstatica *p);

void imprimePilha(pilhaEstatica *p){
    int i;
    printf("[");
    for(i=0; i < p->topo; i++){
        printf("%d ",p->vetor[i].key);
    }
    printf("]\n");
}

int main()
{
    Objeto x;

    pilhaEstatica p;
    iniciaPilha(&p);
    imprimePilha(&p);
    //ImprimePilha();
    x.key= 3;
    empilha(x,&p);
    imprimePilha(&p);

    x.key=5;
    empilha(x,&p);
    imprimePilha(&p);

    x.key=24;
    empilha(x,&p);
    imprimePilha(&p);

    x.key=66;
    empilha(x,&p);
    imprimePilha(&p);
        return 0;
}


