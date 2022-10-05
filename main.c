#include <stdio.h>
#include <stdlib.h>

float lista[10],val;
int pos, i, ocupados = 0;

 void acrescenta (){
        printf("Escreva a posição que deseja colocar um valor: ");
        scanf("%i", &pos);

        printf("\nEscreva o valor que deseja inserir: ");
        scanf("%f", &val);
        
        if(ocupados == 10){
            printf("\n\nERROLista cheia retire valores para poder inserir novos.\n\n");
        }else{
            
            for (i = ocupados; i > pos; i--){
                lista[i] = lista[i-1];
            }
            lista[i] = val;
            ocupados++;
            
            for (int i = 0; i < ocupados; i++) {
                printf("\nposição %i: %f",i , lista[i]);
            }
        }
        
 }

 void deleta (){
     
     printf("O valor de qual posição você deseja excluir?: ");
     scanf("%d", &pos);
     
    for (i = pos; i <= ocupados; i++){
        lista[i] = lista[i + 1];
    }
    ocupados--;
    
    for (int i = 0; i < ocupados; i++) {
        printf("\nposição %i: %f",i , lista[i]);
    }
 }

 void visualiza (){
     
    for (int i = 0; i < ocupados; i++) {
        printf("\nposição %i: %f",i , lista[i]);
    }
        
 }

int main(){
    
    
    char escolhaMenu;

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
            printf("A situação atual da sua lista é essa:\n");
            visualiza();
            printf("\ne o numero de posições ocupadas é de : %d\n", ocupados);
            break;
        default:
            printf("\nErro função inexistente inexistente.\n");
            break;
        }

    } while (escolhaMenu != '0');
    
    return 0;
}
