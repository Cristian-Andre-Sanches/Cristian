#include <stdio.h>
#include <stdlib.h>
void Conversao(int *horas,int *minutos,int TotalMinutos)
{
    if (TotalMinutos>=60)
    {
        *horas=TotalMinutos/60;
        *minutos=TotalMinutos-(*horas * 60);
    }
    else
    {
        *minutos=TotalMinutos;
    }
}
int main()
{
    int TotalMinutos, horas, minutos;
    printf("Digite o total de minutos:\n");
    scanf("%d",&TotalMinutos);

    horas=0;
    minutos=0;

    Conversao(&horas,&minutos,TotalMinutos);
    printf("Horas %i:%i",horas,minutos);
    return 0;
}

