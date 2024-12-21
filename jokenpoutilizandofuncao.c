#include <stdio.h>

int main(){
    
    int quemvenceu(char j1, char j2);
    char j1, j2;

    scanf("%c %c", &j1, &j2);

        if(j1 == j2){
            printf("empate\n");
        }

        else{
            if(quemvenceu(j1, j2)){
                printf("jog1\n");
            }
            else{
                printf("jog2\n");
            }
        }
}

int quemvenceu(char j1, char j2){

    return((j1 =='R' && j2 == 'S') || (j1 == 'S' && j2 == 'P') || (j1 == 'P' && j2 == 'R'));
    
}