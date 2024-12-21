#include <stdio.h>

int main() {
    
    double aposta1, aposta2, aposta3, premio, somadasapostas;
    scanf("%lf %lf %lf %lf", &aposta1,&aposta2, &aposta3, &premio);
    somadasapostas = aposta1 + aposta2 + aposta3;
    
    double ganho1, ganho2, ganho3;
    ganho1 = (aposta1 * premio) / somadasapostas;
    ganho2 = (aposta2 * premio) / somadasapostas;
    ganho3 = (aposta3 * premio) / somadasapostas;
    
    printf("%lf\n%lf\n%lf", ganho1, ganho2, ganho3);
}