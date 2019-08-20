#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool VerificaVogal(char Letra){
    if(Letra=='a'||Letra=='e'||Letra=='i'||Letra=='u'||Letra=='o'){
        return true;
    }else{
    return false;
    }
}


int main()
{

    int De=0;
    char c;
    FILE *arq;
    arq = fopen("Teste.txt","r");
    if(arq	==	NULL){
        printf("Ocorreu	um	erro	na	abertura do arquivo");
        system("PAUSE");
        exit(1);
    }
    FILE *arq2;
    arq2 = fopen("Saida.txt","w");
    if(arq	==	NULL){
        printf("Ocorreu	um	erro	na	abertura do arquivo");
        system("PAUSE");
        exit(1);
    }


    c =	fgetc(arq);
    while(c	!=	EOF){
        if(c=='\n')
        {
        De++;
        }
        c =	fgetc(arq);
        if(VerificaVogal(c)) {
            //printf("*");
            fputc('*',arq2);
        } else{
            //printf("%c",c);
            fputc(c,arq2);
        }

    }
    printf("Numeros de linha:%i",De);
    fclose(arq);
    fclose(arq2);

return 0;
}

