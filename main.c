#include <stdio.h>
#include <stdlib.h>

int main () {
    int menu;

    printf("1:Financeiro| 2:Suporte Tecnico| 3:Alteração de Plano| 4: Falar com Atendente \n");
    printf("Escolha um numero de 1 a 4: ");
    scanf("%i", &menu);

    switch(menu){
    case 1:
        printf("Voce selecionou o financeiro");
        break;

    case 2:
        printf("Voce selecionou o suporte tecnico");
        break;
      
    case 3:
        printf("Voce selecionou Alteracao de plano");
        break;

    case 4:
        printf("voce selecionou falar com atendente");
        break;

    default:
        printf("Opcao invalida");
        break;
    }
}
