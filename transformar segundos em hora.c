#include <stdio.h>

int main() {
    int tempo, horas, min, sec;
    scanf("%d", &tempo);
    
    // 1 hora == 3600 segundos
    horas = tempo / 3600;
    
    //1 minuto == 60 segundos;
    min = (tempo % 3600) / 60;
    
    //segundos == resto que não virou minuto
    sec = tempo % 60;
    
    printf("%d\n%d\n%d\n", horas, min, sec);
}