// Faça um algoritmo em linguagem C com as seguintes funcionalidades:
//  Receba um registro, com dois campos, como dados de entrada.
//  O primeiro campo é um vetor que vai armazenar o nome do aluno.
//  O segundo campo é uma variável do tipo inteiro que vai armazenar o RU do aluno.
//  Imprime na tela os dados armazenados na estrutura.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num; //Variável tipo Inteiro
    char nome[20]; //Variável tipo Char com 20 posições

    printf("Digite o nome do Aluno: \n");   //Imprime um texto ao usuário
        scanf("%s", nome);                  //Salva valor digitado pelo usuario na variavel
    printf("Digite o codigo do aluno: \n"); //Imprime um texto ao usuário
        scanf("%d", &num);                  //Salva valor digitado pelo usuario na variavel

    printf("O nome do aluno e: %s.\n", nome);//Imprime o texto com oa variavel
    printf("Codigo do aluno: %d\n", num);    //Imprime o texto com oa variavel
}