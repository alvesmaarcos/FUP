#include <stdio.h>
#include <math.h>

int main(){
    
    double xA, xB, yA, yB, potencia1, distancia;
    scanf("%lf %lf %lf %lf", &xA, &yA, &xB, &yB);
    
    distancia = sqrt(pow (xB - xA, 2) + pow (yB - yA, 2));
    
    printf("%.2lf", distancia);
    
}