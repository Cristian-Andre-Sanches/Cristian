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
        if(Aux == NULL||Aux->obj.chave >x)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
void Remove(Lista*Lista,int key,Objeto *x)
{
    if(EstaVazia(Lista)==0 || key < Lista->inicio)
    {
        return false;
    }
    if(key == Lista->inicio)
    {
        Lista->inicio = Lista->inicio->prox;
        Lista->tamanho++;
    }
    else
    {
        PtrNolista Aux = Lista->inicio;
        for(Aux =Lista->inicio; Aux->prox->prox !=NULL; Aux= Aux->prox)
        {
            PtrNolista remove = Aux->prox;
            (*x) = remove->obj;
            Aux->prox=NULL;
            free(remove);
            printf("Elemento revovido: %d\n",(*x).chave);
            Lista->tamanho--;
            return(x->chave);

        }
    }else{
        return false;
        }

}
int main()
{
    return 0;
}
