#include <stdio.h>

int main(){
    int hora, minuto, dia, mes, ano, restoano;
    scanf("%d %d %d %d %d", &hora, &minuto, &dia, &mes, &ano);
    restoano = ano % 100;

printf("%02d:%02d %02d/%02d/%02d\n", hora, minuto, dia, mes, restoano);