#include<stdio.h>
#include<string.h>
#include<math.h>
#include <windows.h>
#include <ctype.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char respt;
 
    do {
        INICIO_MENU:
        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção:\n");
        
        char entrada_opcao[50];
        int resposta = 0;
        double num1, num2;
        
     
        scanf(" %s", entrada_opcao);
        
    
        if (strlen(entrada_opcao) != 1 || entrada_opcao[0] < '1' || entrada_opcao[0] > '5') {
            printf("Opção inválida!\n\n");
            while (getchar() != '\n'); // Limpa qualquer sobra do teclado
            goto INICIO_MENU;
        }
        
        // Converte o caractere validado para número inteiro
        resposta = entrada_opcao[0] - '0';
            
        if (resposta == 5) {
            break;
        }

        switch (resposta)
        {
            case 1: 
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
                break;
            case 2:
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
                break;
            case 3:
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                printf("Resultado: %.2lf X %.2lf = %.2lf\n", num1, num2, num1*num2);
                break;
            case 4:
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                if(num2 != 0){
                    printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, num1/num2);
                } else {
                    printf("Erro! Divisão por zero! \n");
                }
                break;
        }

       
        while (1) {
            printf("Deseja fazer outra operação? (s/n): \n");   
            scanf(" %c", &respt);
            
            if (respt == 's' || respt == 'S' || respt == 'n' || respt == 'N') {
                break; 
            } else {
                printf("Opção inválida! Digite apenas 's' para sim ou 'n' para não.\n\n");
                while (getchar() != '\n');
            }
        }

    } while(respt == 'S' || respt == 's');
   
    printf("Obrigada por usar a Calculadora! Até a próxima!\n");

    return 0; 
}



