#include <stdio.h>

int main(){
    int capacidade, m;
    scanf("%d", &capacidade);
    
int ocupacao=0, i ;
for (i = 1; i <= 2*capacidade; i++){
    scanf("%d", &m);
    ocupacao += m;

    if(ocupacao == 0){
        printf("vazio\n");
    }
    
    else if(ocupacao < capacidade){
        printf("ainda cabe\n");
    }
    
    else if(ocupacao == capacidade){
        printf("lotado\n");
    }
    
    else if(ocupacao == capacidade*2){
        printf("hora de partir\n");
    }

}

}