// Faça um algoritmo em linguagem C que contenha dois números inteiros digitados na
// tela pelo usuário:
// a. O primeiro número marca um início;
// b. O segundo número marca um fim;
// O algoritmo vai contar quantos números existem entre o início (primeira entrada) e
// o fim (segunda entrada). A impressão na tela do usuário deve ser realizada de duas formas:
// a. Iterativa;
// b. Recursiva;
// Ao colocar no seu relatório uma imagem do seu código funcionando, coloque ele
// rodando utilizando como valor de inicio os 2 últimos valores do seu RU e valor final
// o número 99.

#include <stdio.h>
#include <stdlib.h>

int contar_iterativo(int inicio, int final){ //declara uma função com dois parametros
    int i=0,contador=0; //Variável tipo Inteiro
    for(i=inicio;i<=final;i++){ //Inicia um loop do parametro inicio até o parametro final com incremento
        contador++; //Incrementa a variavel contador
    }
    return contador; //Devolve o valor da variavel
}

int contar_recursivo(int inicio, int final){ //declara uma função com dois parametros
    int contador;//Variável tipo Inteiro
    if(inicio == final){ //Se inicio for igual ao final
        return 1; //Devolve o valor 1
    }
    else{ //Caso contrario
        contador = 1 +  contar_recursivo(inicio+1,final); //Soma 1 ao retorno da função passando um inicio somado a 1
        return contador; //Devolve o valor da variavel
    }
}

int main(void){
    int b = contar_iterativo(41,99); // Variavel tipo Inteiro com valor igual a função com os parametros 
    int a = contar_recursivo(41,99); // Variavel tipo Inteiro com valor igual a função com os parametros 

    printf("O resultado com o contador iterativo foi: %d", a); //Imprime o valor com a variavel
    printf("\nO resultado com o contador recursivo foi: %d", b);
}