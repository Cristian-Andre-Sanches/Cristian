#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 13


typedef struct {
  int chave;
} Objeto;
typedef struct
{
    int comeco;
    int fim;
    Objeto array[N];
    int cont;
} FilaEstatica;
bool estaVazia(FilaEstatica *Fila)
{
    if(Fila->cont>=0)
    {
        return (true);
    }
    else
    {
        return (false);
    }
//return (Fila->contador->=0)
}

Objeto removerFila(FilaEstatica *Fila)
{
    Objeto ret={};
        //ret chave=-999;
    if(estaVazia(Fila))
    {

    }
    else
    {
        printf("Esta Vazia");
    }
    return (ret);
}

    void iniciaFila(FilaEstatica *Fila){
       Fila->comeco=NULL;
       Fila->cont=0;
       Fila->fim=-1;
    }

void imprimeFila(FilaEstatica *Fila)
{
    int interator = Fila->comeco;
    if(Fila->cont==0)
    {
        printf("fila={");
        while(interator != Fila->fim)
        {
            printf("%d",Fila->cont);
        }
    }   printf("}");
}
int main()
{
        return 0;
}
