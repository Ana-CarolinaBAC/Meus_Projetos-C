#include<stdio.h>
#include<string.h>
#include<math.h>
#include <windows.h>

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
        
        int resposta;
        double num1;
        double num2;
        
        
        if (scanf(" %d", &resposta) != 1 || resposta < 1 || resposta > 5) {
            printf("Opção inválida!\n\n");
            
            
            while (getchar() != '\n'); 
            
            goto INICIO_MENU;
        }
            
        
        if (resposta == 5) {
            respt = 'n';
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

        printf("Deseja fazer outra operação? (s/n): \n");   
        scanf(" %c", &respt);

    } while(respt == 'S' || respt == 's');
   
    printf("Obrigada por usar a Calculadora! Até a próxima!\n");

    return 0; 
}



