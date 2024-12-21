#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    int soma = n1 + n2;
    int subtracao = n1 - n2;
    int multiplicacao = n1 * n2;
    float divisao = (double)n1 / n2;
    int resto = n1 % n2;

    printf("%d\n%d\n%d\n%.2lf\n%d\n", soma, subtracao, multiplicacao, divisao, resto);
}