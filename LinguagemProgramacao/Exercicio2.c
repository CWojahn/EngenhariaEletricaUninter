// Escreva um algoritmo em LINGUAGEM C que armazene na memória o seu RU e o
// valor 1234567, ambos digitados pelo usuário na tela.
// Em seguida, imprima na tela ambos RU usando ponteiros. O algoritmo também vai
// ter que comparar os dois RU usando ponteiros e imprimir na tela qual é o maior.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int RU1, registro1, *ponteiro1, *ponteiro2, RU2, registro2; //Declaração das variáveis

    printf("DIGITE O PRIMEIRO RU: "); //Imprime um texto ao usuário
       scanf(" %d", &RU1);            //Salva valor digitado pelo usuario na variavel
    printf("DIGITE O VALOR: ");       //Imprime um texto ao usuário
        scanf(" %d", &registro1);     //Salva valor digitado pelo usuario na variavel

    printf("DIGITE O SEGUNDO RU: ");  //Imprime um texto ao usuário
        scanf(" %d", &RU2);           //Salva valor digitado pelo usuario na variavel
    printf("DIGITE O VALOR: ");       //Imprime um texto ao usuário
        scanf(" %d", &registro2);     //Salva valor digitado pelo usuario na variavel

    //Aqui é realizada a associação entre variavel e ponterios
    ponteiro1=&registro1;
    ponteiro2=&registro2;

    if(*ponteiro1>*ponteiro2){//Compara se o ponteiro1 é maior que o ponteiro2
        printf("O PRIMEIRO RU TEM MAIOR VALOR: %d ", *ponteiro1); //Se o ponteiro1 for maior que o ponteiro2 imprime o texto com o ponteiro1
    }
    else{
        printf("O SEGUNDO RU TEM MAIOR VALOR: %d ", *ponteiro2);//Caso contrario imprime o texto com o ponteiro2
    }
    return 0;
}
