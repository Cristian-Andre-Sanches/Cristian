#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct {
    int chave;
} Objeto;

typedef struct NoPilha *PtrNoPilha;

typedef struct NoPilha{
  Objeto obj;
  PtrNoPilha proximo;
} NoPilha;

typedef struct {
  PtrNoPilha topo;
  int tamanho;
} PilhaDinamica;


void iniciaPilha(PilhaDinamica *p){
    p->topo=NULL;
    p->tamanho=0;
}

int tamanho(PilhaDinamica*p){
    return (p->tamanho);
}

bool estaVazia(PilhaDinamica*p){
    //if(p->tamhanho==0){
      //  return (true)
    //}else { return (false)
    return (p->tamanho==0);
    }

void empilha(Objeto obj, PilhaDinamica *p){

    Objeto pop(PilhaDinamica *p){
        if(estaVazia(p)){
            PtrNoPilha Aux;
            Aux =topo(p);
            topo = topo -> proximo;
        }
    }
}

int main()
{

    return 0;
}
