#include <stdio.h>
#include <math.h>

int main() {
    //a ideia é calcular a média de um aluno pela matrícula dele, com a opção de verificar notas já inseridas no sistema ou calcular no ato da verificação
    /* 0001 = média do JÕAO, ele deve estar REPROVADO.
    0002 = média da MARIA. Ela deve estar APROVADA.
    0003 = média não registrada. Retorno de ERRO */
    
    int matricula;
    int nota1, nota2; 
    double media;
    
    printf("Insira a matrícula do aluno ou envie 1 para calcular uma média fora do sistema: ");
    scanf("%d", &matricula);
    
    if(matricula == 1) {
        printf("Insira as notas do aluno: \n");
        scanf("%d %d", &nota1, &nota2);
        
        media = ((double)nota1 + (double)nota2) / 2;
        
        if(media >= 7) {
            printf("A média deste aluno é %.2lf e ele está APROVADO.", media);
        }
        else {
            printf("A média desse aluno é %.2lf e ele está REPROVADO.", media);
        }
    }
    
    switch(matricula) {
        case 0001:
        nota1 = 10; 
        nota2 = 2;
        media = ((double)nota1 + (double)nota2) / 2;
        
        if(media >= 7) {
            printf("A média deste aluno é %.2lf e ele está APROVADO.", media);
        }
        else {
            printf("A média desse aluno é %.2lf e ele está REPROVADO.", media);
        }
        break;
        
        case 0002:
        nota1 = 10; 
        nota2 = 7;
        media = ((double)nota1 + (double)nota2) / 2;
        if (media >= 7){
            printf("A média deste aluno é %.2lf e ele está APROVADO.", media);
        }
        else {
            printf("A média desse aluno é %.2lf e ele está REPROVADO.", media);
        }
        break;
        default:
            printf("A matrícula inserida não está registrada no sistema. Tente novamente!");
    }

}