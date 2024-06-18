#include "stdio.h" 
/*
Faça um programa que calcule a soma dos números ímpares entre 100 e 200. 

Obs.: Supor a existência do comando “mod”, que retorna o resto da divisão entre dois números. 
 
IMPORTANTE: Utilize o algoritmo mais veloz que puder definir. 
*/

// Se o objetivo é ser veloz então vamos fazer em C :) kkkk
 
int mod(int a,int b) {
    return a%b;
}

int main() {
    int resultado_soma=0;
    for(int i=100;i<=200;i++) {
        if(mod(i,2)==1) resultado_soma+=i;
    } 
    printf("Resultado da soma: %u\n",resultado_soma);
    return 0;
}
