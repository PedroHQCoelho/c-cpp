#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Fun��o principal do programa
void main(){

    //Imprime na tela
    printf("%d\n", TAM);

    int i;

    //Contagem at� 10
    for(i = 1;i <= TAM;i++){
        printf("%d\n", i);
    }

    //Pausa o programa ap�s executar
    system("pause");

}

