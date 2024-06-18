/* 
Escreva uma função do tipo inteiro que recebe como parâmetros dois números e cujo retorno seja a soma desses dois valores. Em seguida, faça uma alteração nessa função que permita que, de alguma forma, ela forneça também o resultado da multiplicação dos dois valores, além do valor da soma dos dois valores que ela já retornava. 
*/

#include <iostream>

inline int soma(int a,int b) {
    return a+b;
}
inline int soma_e_multiplica(int a,int b,int &resultado_multiplicacao) {
    resultado_multiplicacao=a*b;
    return a+b;
}

int main() {
    int a=2;
    int b=4;
    
    
    std::cout<<"Resultado soma: " << soma(a,b) << std::endl;
    int resultado_multiplicacao; 
    int resultado_soma=soma_e_multiplica(a,b,resultado_multiplicacao);
    
    std::cout<<"Resultado soma: " << resultado_soma << std::endl;
    std::cout<<"Resultado multiplicacao: " << resultado_multiplicacao << std::endl;

    return 0;
}
