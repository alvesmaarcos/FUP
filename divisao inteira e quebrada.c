#include <stdio.h>

int main() {
    
    int a, b, resto;
    scanf("%d %d", &a, &b);
    
    int divisaoint = a / b;
    double divisao = (double)a / b;
    resto = a % b;
    
    printf("%d\n%d\n%.2lf", divisaoint, resto, divisao);
    
}