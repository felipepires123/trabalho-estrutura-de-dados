#include <stdio.h>
#include <stdlib.h>

#define MAX 10

float lista[MAX];
int pos, i, elementos, quant = 0, valor;

 void acrescenta (){
    printf("Digite a posicao do elemento que deseja acrescentar um novo elemento:");
    scanf("%d", &pos);
    
    printf("Digite o valor:");
    scanf("%d", &valor);

    for (i = elementos; i >= pos; i--){
        lista[i] = lista[i-1];
    }
    lista[pos-1] = valor;
 }

 void deleta (){
    printf("Digite a posicao do elemento que deseja deletar: \n ");
        scanf(" %d", &pos);
        if (pos > elementos + 1) {
            printf(" \nErro, posicao invalida!\n.");
        } else {
            for (i = pos - 1; i <= elementos; i++)
                lista[i] = lista[i + 1];
        } 
 }

 void visualiza (){
        
        fflush(stdin);
        quant = 0;
        
        printf("Digite a posicao do elemento que deseja visualizar o valor:");
        scanf("%d", &pos);
        
        for (i = 0; i < elementos; i++){
            if(lista[i] != 0){
                quant++;
            }
        }
        
        printf("\n+---------------------------------------------------------------------------+\n");
        printf("| O valor da posição %d é %.2f                                               |\n", pos, lista[i-1]);
        printf("| Quantidade de elementos: %d                                                |\n", quant);
        printf("+---------------------------------------------------------------------------+\n");
 }

int main(){
    
    char escolhaMenu; 

  
    printf(" \nDigite a quantidade de elementos:  ");
    scanf(" %d", &elementos);
    if(elementos < 10 || elementos >= 0){
        printf("Erro o tamanho da lista tem de ser entre 1 e 10");
    }
    printf(" \nDigite os valor para os elementos da lista: \n");

    for (i = 0; i < elementos; i++) {
            printf("Posicao[%d] = ", i+1);
            scanf("%f", &lista[i]);
        }

    do{
        scanf("%c", &escolhaMenu);

        printf("\nEstado atual da lista:");
        for (i = 0; i < elementos; i++) {
            printf("\n");
            printf("Posicao[%d] = %.2f", i+1, lista[i]);
        }

        printf("\n+-------------------------------------------------------------------------+");
        printf("\n|                                                                         |");
        printf("\n| Ola bem vindo ao painel de intercao da lista, escolha a funcao desejada:|");
        printf("\n| (1) - Acrescenta                                                        |");
        printf("\n| (2) - Deleta                                                            |");
        printf("\n| (3) - Visualiza                                                         |");
        printf("\n| (0) - Sair                                                              |");
        printf("\n|                                                                         |");
        printf("\n+-------------------------------------------------------------------------+\n");
        printf("OPÇÃO: ");
        scanf("%c", &escolhaMenu);

        switch (escolhaMenu){
        case '0':
            escolhaMenu = '0';
            break;
        case '1':
            acrescenta();
            break;
        case '2':
            deleta();
            break;
        case '3':
            visualiza();
            break;
        default:
            printf("\nErro valor inexistente.\n");
            break;
        }

    } while (escolhaMenu != '0');
    
    return 0;
}
