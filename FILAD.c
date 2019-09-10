#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Nofila *PtrNofila;
// Nofila*->PtrNofila;
typedef struct
{
    PtrNofila inicio;
    PtrNofila Fim;
    int Cont;
} FilaDinam;
typedef struct
{
    int Chave;
}Objeto;
typedef struct Nofila
{
    Objeto obj;
    PtrNofila proximo;
} Nofila;
void iniciaFila(FilaDinam*F)
{
    F->inicio=NULL;
    F->Fim=NULL;
    F->Cont=0;
}
bool Tamanho(FilaDinam*F)
{
    return(F->Cont);
}
bool EstaVazia(FilaDinam*F)
{
    return (F->Cont==0);
}
void Enquewe(FilaDinam *Q,Objeto x)
{
    PtrNofila aux;
    aux=(PtrNofila)malloc(sizeof(Nofila));
    aux->obj=x;

     if(EstaVazia(Q))
    {
        Q->inicio = Q->Fim = aux;
        aux->proximo=NULL;
    }
    else
    {
        aux->proximo=NULL;
        Q->Fim->proximo=aux;
        Q->Fim=Q->Fim->proximo;
    }
    Q->Cont++;
}
int main()
{
    FilaDinam fila;
    iniciaFila(&fila);
    return 0;
}
