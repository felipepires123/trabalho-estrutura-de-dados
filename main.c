#include <stdio.h>
#include <string.h>
int main()
{
    float list[10];
    int ocupados = strlen(list);
    float val;
    int pos;
    char fim = 'a';
    
   do{
        printf("Escreva a posição que deseja colocar um valor: ");
        scanf("%i", &pos);
        
        printf("\nEscreva o valor que deseja inserir: ");
        scanf("%f", &val);
        
        scanf("%c", &fim);
        
        for (int i = ocupados; i > pos; i--) {
            list[i] = list[i-1];
        }
        
        list[pos] = val;
        
        printf("Se queiser sair digite x: ");
        scanf("%c", &fim);
        
        for (int i = 0; i < ocupados; i++) {
            printf("\nposição %i: %f",i , list[i]);
        }
        
    }while(fim != 'x');
    
}
