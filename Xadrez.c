#include <stdio.h>

int main(){

    int i, torre = 0, bispo = 0, rainha = 0, opcao;

    printf(" Vamos Jogar Xadrez \n");
    printf(" DIgite a peça que quer movimentar \n");
    
    do{
    printf(" 1. TORRE \n");
    printf(" 2. BISPO \n");
    printf(" 3. RAINHA \n");
    printf(" 4. SAIR \n");
    printf(" Digite a opção: ");
    scanf("%d", &opcao);

        switch (opcao)  // CRIEI ESSE SWITCH PARA COLOCAR AS DIFERENTE TIPOS DE  FORMAS PRA USAR
        {
        case 1:

            for(torre = 0; torre < 5; torre++){ // O FOR É PARA ELE REFEPIR O CONANDO ENQUANTO NÃO CHEGAR A 5
                printf(" Direita\n"); //imprime a direção do movimento
            }
            break;

        case 2:
            do{
                
                printf("cima, direita \n"); 
                bispo++;
                
            }while (bispo <= 5);

            break;
        case 3:

            while (rainha <=5)
            {
                printf(" Cima \n");
                rainha++;
            }
            
            break;

         case 4:
            printf(" VocÊ saiu do Jogo \n");
            break;   

        default:
        printf(" Opção invalida \n");
            break;
        }
            
    } while (opcao != 4);
    

return 0;
}