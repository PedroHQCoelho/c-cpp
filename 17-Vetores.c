#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Fun��o principal do programa
void main(){

    //Imprime na tela
    int vetor[TAM],cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posi��o
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] =  vetor[cont] + 1;
    }

    //Exeibindo os valores do vetor
    printf("Posicao 0: %d\n", vetor[0] );
    printf("Posicao 1: %d\n", vetor[1] );
    printf("Posicao 2: %d\n", vetor[2] );

    //Imprimindo vetor em um la�o de repeti��o
    for(cont = 0; cont < TAM; cont++){
        printf("Posicao %d : %d\n", cont, vetor[cont] );
    }

    //Lendo 3 valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

    //Imprimindo vetor em um la�o de repeti��o
    for(cont = 0; cont < TAM; cont++){
        printf("Posicao %d : %d\n", cont, vetor[cont] );
    }

    //Pausa o programa ap�s executar
    system("pause");

}

