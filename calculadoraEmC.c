//calculadora básica em C funcional

#include <stdio.h>
#include <math.h>

int main() 
{
    double n1, n2, result;
    printf("Olá! Insira dois valores:\n ");
    scanf("%lf %lf", &n1, &n2);
    printf("Os valores são: %.2lf e %.2lf. Qual operação gostaria de realizar? \n", n1, n2);
    printf("Opções: \n 1. Soma \n 2. Subtração \n 3. Multiplicação \n 4. Divisão. \n");
    
    int operacao;
    scanf("%d", &operacao);
    
    switch(operacao) 
    {
        case 1:
        result = n1 + n2;
        printf ("A soma entre %.2lf e %.2lf equivale a %.2lf: ", n1, n2, result);
        break;
        
        case 2:
        result = n1 - n2;
        printf ("A subtração entre %.2lf e %.2lf equivale a %.2lf: ", n1, n2, result);
        break;
        
        case 3:
        result = n1 * n2;
        printf ("A multiplicação entre %.2lf e %.2lf equivale a %.2lf: ", n1, n2, result);
        break;
        
        case 4:
        if(n2 == 0)
        {
            printf("Não é possível dividir por 0. Tente novamente!");
            return 1;
        }
        
        else
        {
        result = n1 / n2;
        printf ("A divisão entre %.2lf e %.2lf equivale a %.2lf: ", n1, n2, result);
        }
        break;
        
        default:
        printf("Você inseriu uma opção inválida. Favor reavaliar as operações disponíveis.");
        return 1;
    }
}