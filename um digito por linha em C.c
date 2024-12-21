#include <stdio.h>

int main() {
    int n1, npormil, nporcem, npordez, ultimacasa;
    scanf("%d", &n1);
    
    npormil = n1 / 1000;
    nporcem = (n1 % 1000) / 100;
    npordez = (n1 % 100) / 10;
    ultimacasa = n1 % 10;
    
    printf("%d\n%.1d\n%d\n%d\n", npormil, nporcem, npordez, ultimacasa);
}