#include <stdio.h>

int main() {
    double n1, n2, n3, media;
    
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    
    media = (n1*5 + n2*3 + n3*2) / 10;

    printf("%.2lf",media);
}