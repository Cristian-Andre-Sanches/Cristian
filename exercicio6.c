#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct
{
    char valor;
    char naipe;
    bool foiJogada;
} Carta;
typedef struct
{
    Carta array[54];
} Baralho;
char naipes[4]= {'P','O','E','C'};
char valores[13]= {'A','2','3','4','5','6','7','8','9','D','J','Q','K'};
void criaBaralho(Baralho *baralho)
{
    /* baralho->array[0].naipe = 'P';
     baralho->array[0].valor = 'Q';*/
    int i;

    for(i=0; i<54; i++)
    {
        baralho->array[0].foiJogada = false;
    }
    for(i=0; i<52; i++)
    {
        int naipe.id = i% 4;
        baralho->array[i]= naipe[naipe.id];
    }

}
void imprimeBaralho(Baralho baralho)
{
    for(i=0; i<54; i++)
    {

    }
}

void imprimeCarta(Carta c)
{
    printf("Valor = %c\n",c.valor);
    printf("Naipe = %c\n",c.naipe);
    printf("Jogada = %b\n",c.foiJogada);
}

int main()
{
    Baralho baralho;
    printf("antes\n");
    imprimeCarta(baralho.array[0]);
    criaBaralho(&baralho);
    printf("\n\ndepois:");
    imprimeBaralho(baralho);
    printf("\n");
    return 0;
}
