// Replique o exercício 3. Porém, agora, declare um ponteiro para a estrutura de dados
// heterogênea. No momento da leitura dos dados e da impressão na tela, use o ponteiro
// para buscar o conteúdo dos campos. Imprima na tela também o seu RU na tela.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //Cria a estrutura de aluno com o ponteiro nome e variavel
    struct aluno {
        char *nome;
        int RU;
    };

    typedef struct aluno aluno; //Define que a variavel aluno é baseada no tipo de estrutura recem criada
    aluno a1; //define uma variavel a1 do tipo aluno
    aluno *a = &a1; //associa um ponteiro a variavel
    a->nome = malloc(sizeof(char) * 64); // define o tamanho alocado para o parametro nome

    printf("Digite seu nome: ");//Imprime um texto ao usuário
        scanf("%s", a->nome); //Salva valor digitado pelo usuario na variavel
    printf("Digite seu RU: ");//Imprime um texto ao usuário
        scanf("%d", &a->RU);//Salva valor digitado pelo usuario na variavel

    printf("Nome do aluno: %s\nRU do aluno: %d\n", a->nome, a->RU); // Imprime o texto com as variaveis na forma estruturada
    return 0;
}