#include <stdio.h>

int main(){
    char j1, j2;
    scanf("%c %c", &j1, &j2);
    
/*As regras de Pedra-papel-tesoura-lagarto-Spock são:

Tesoura corta papel
Papel cobre pedra
Pedra esmaga lagarto
Lagarto envenena Spock
Spock esmaga (ou derrete) tesoura
Tesoura decapita lagarto
Lagarto come papel
Papel refuta Spock
Spock vaporiza pedra
Pedra amassa tesoura

R(pedra), P(papel), S(tesoura), L(lagarto) ou K(spock) como opcão dos dois jogadores.
*/
    if((j2=='S' && (j1=='P' || j1=='L')) 
    || (j2=='P' && (j1=='R' || j1=='K'))
    || (j2=='R' && (j1=='L' || j1=='S'))
    || (j2=='L' && (j1=='K' || j1=='P'))
    || (j2=='K' && (j1=='S' || j1=='R')))
    {
            printf("jog2\n");
    }
    
    else if((j1=='S' && (j2=='P' || j2=='L'))
    || (j1=='P' && (j2=='R' || j2=='K'))
    || (j1=='R' && (j2=='L' || j2=='S')) 
    || (j1=='L' && (j2=='K' || j2=='P')) 
    || (j1=='K' && (j2=='S' || j2=='R')))
    {
            printf("jog1\n");
    }
    
    else{
        printf("empate\n");
    }
}