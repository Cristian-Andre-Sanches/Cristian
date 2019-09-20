#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int chave;
} Objeto;
typedef struct NoLista *PtrNolista;
typedef struct NoLista
{
    Objeto obj;
    PtrNolista prox;
    PtrNolista antes;
} NoLista;
typedef struct
{
    PtrNolista inicio;
    int tamanho;
} Lista;
void IniciaLista(Lista*Lista)
{
    Lista->inicio == NULL;
    Lista->tamanho = 0;
}
bool TamanhoLista(Lista*Lista)
{
    return(Lista->tamanho);
}
bool EstaVazia(Lista*Lista)
{
    return(Lista->tamanho==0);
}
void Inserir(Lista*Lista,Objeto x)
{
    PtrNolista Novo;
    Novo=(PtrNolista*)malloc(sizeof(NoLista));
    Novo->obj=x;
    if(EstaVazia(Lista)==true||x.chave<Lista->inicio->obj.chave)
    {
        Novo->prox ==NULL;   //Novo->prox=Lista->inicio;
        Lista->inicio=Novo;
    }
    else
    {
        PtrNolista Aux;
        Aux=Lista->inicio;
        while(Aux->prox!=NULL && x.chave> Aux->prox->obj.chave)
        {
            Aux=Aux->prox;
        }
        Novo->prox=Aux->prox;
        Aux->prox=Novo;
    }
    Lista->tamanho++;
}
bool Pesquisar(Lista*Lista,int x)
{
    if(EstaVazia(Lista))
    {
        return false;
    }
    PtrNolista Aux = Lista->inicio;
    while(Aux!=NULL && x> Aux->obj.chave)
    {
        Aux = Aux->prox;
        if(Aux ==NULL||Aux->obj.chave >x)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}
int main()
{
    return 0;
}
