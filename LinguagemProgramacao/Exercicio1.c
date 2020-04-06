// Escreva um algoritmo em linguagem C com as seguintes instruções:
// 1. Declare três variáveis (inteiro, real e char);
// 2. Declare três ponteiros;
// 3. Associe as variáveis aos ponteiros;
// 4. Modifique os valores de cada variável indiretamente usando os ponteiros
// associados. Para armazenar os valores nas variáveis, armazene na variável
// char a primeira letra do seu nome, na variável inteira os dois últimos dígitos
// do seu RU e na variável real os 4 últimos dígitos do seu RU, sendo os 2
// últimos os valores com virgula;
// 5. Imprima na tela os valores das variáveis antes e após a modificação.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int inteiro; //Variável tipo Inteiro
    double real; //Variável tipo Real
    char caracter; //Variável tipo Char
    
    //Aqui é realizada a associação entre variavel e ponterios
    int *pontI = &inteiro; 
    double *pontR = &real;
    char *pontC = &caracter;
    
    //Aqui são modificados os valores das variáveis conforme enunciado
    *pontI = 41;   
    *pontR = 57.41; 
    *pontC = 'C'; 

    printf("%d\n", inteiro); //Imprime variável inteiro
    printf("%.2f\n", real); //Imprime variável real com duas casas após a virgula
    printf("%c\n", caracter); //Imprime variávle char
    return 0;
}
