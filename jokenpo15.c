#include <stdio.h>

int main(){

    int diferenca(int j1, int j2);
    int quemvenceu(int diff);
    
    int j1, j2;
    scanf("%d %d", &j1, &j2);

        int diff = (j2 - j1 + 15) % 15;

    if(diff == 0){
        printf("Empate\n");
    }

    else if(diff <= 7){
        printf("Jogador 1\n");
    }

    else{
        printf("Jogador 2\n");
    }
}