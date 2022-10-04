#include <stdio.h>

#define MAX 10

    float lista[MAX];
    int pos, i, elementos, quant = 0, valor;

 void acrescenta (){
    printf("Digite a posicao do elemento que deseja inserir um novo valor:");
        scanf("%d", &pos);
        
        printf("Digite o valor:");
        scanf("%d", &valor);
    
        for (i = elementos; i >= pos; i--)
            lista[pos - 1] = valor;
    
        for (i = 0; i <= elementos-1; i++) {
            printf(" lista[%d] = ", i+1);
            printf(" %.f \n", lista[i]);
        }
 }

 void deleta (){
    printf("Digite a posicao do elemento que deseja deletar: \n ");
        scanf(" %d", &pos);
        if (pos > elementos + 1) {
            printf(" \nErro, posicao invalida!\n.");
        } else {
            for (i = pos - 1; i <= elementos; i++)
                lista[i] = lista[i + 1];
        
            printf(" \nExibir todos os itens da lista: \n");
            for (i = 0; i < elementos; i++) {
                printf(" lista[%d] = %.f\n", i+1, lista[i] );
              
            }
        } 
 }

 void visualiza (){
        printf("sua lista esta assim\n");
        for (i = 0; i <= elementos - 1; i++) {
            printf(" lista[%d] = ", i+1);
            printf(" %.f \n", lista[i]);
        }
        printf("Quantidade de elementos: %d", quant);
 }

int main(){
    
    char escolhaMenu; 

  
    printf(" \nDigite a quantidade de elementos:  ");
    scanf(" %d", &elementos);
    printf(" \nDigite os valor para os elementos da lista: \n ");

    for (i = 0; i < elementos; i++) {
        printf("Posicao[%d] = ", i+1);
        scanf(" %f", &lista[i]);
        if (lista[i] != 0)
        quant++;
    }
    do{
        scanf("%c", &escolhaMenu);
        
        printf("\n+-------------------------------------------------------------------------+");
        printf("\n|                                                                         |");
        printf("\n| Ola bem vindo ao painel de intercao da lista, escolha a funcao desejada:|");
        printf("\n| (1) - Acrescenta                                                        |");
        printf("\n| (2) - Deleta                                                            |");
        printf("\n| (3) - Visualiza                                                         |");
        printf("\n| (0) - Sair                                                              |");
        printf("\n|                                                                         |");
        printf("\n+-------------------------------------------------------------------------+");

        scanf("%c", &escolhaMenu);

        switch (escolhaMenu)
        {
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
