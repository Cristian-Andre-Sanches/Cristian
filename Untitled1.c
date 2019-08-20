#include <stdio.h>
#include <stdlib.h>

int Mult(int base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return base * Mult(base, expoente-1);
}


int main(){
    int p, resultado, n = 5;
    //int n=5;
    //int resultado;
    //int p;
    scanf("%d",)
    resultado = Mult(n,3);
    printf("%d",resultado);
    return 0;
}
