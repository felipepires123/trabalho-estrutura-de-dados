#include <stdio.h>

#define MAX 10

int main() {
    float lista[MAX];
    int pos, i, elementos, quant = 0, valor;
  
        printf(" \nDigite a quantidade de elementos:  ");
        scanf(" %d", &elementos);
        printf(" \nDigite os valor para os elementos da lista: \n ");
    
        for (i = 0; i < elementos; i++) {
            printf("Posicao[%d] = ", i+1);
            scanf(" %f", &lista[i]);
            if (lista[i] != 0)
            quant++;
        }
        printf("Imprime lista:\n");
        for (i = 0; i <= elementos - 1; i++) {
            printf(" lista[%d] = ", i+1);
            printf(" %.f \n", lista[i]);
        }
    
        printf("Digite a posicao do elemento que deseja visualizar o valor:");
        scanf("%d", &pos);
    
        for (i = 0; i < elementos-1; i++) {
            if (lista[i] == pos) {
                printf("Posicao %d = %.f\n", pos, lista[i]);
            }
        }
    
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
        
        printf("Quantidade de elementos: %d", quant);
        return 0;
}
