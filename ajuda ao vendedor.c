#include <stdio.h>

int main() {
    

    double valordavenda, desconto10, parcela_3x, comissao5_av, comissao5_3x;
    scanf("%lf", &valordavenda);
    
    desconto10 = valordavenda * 0.9;
    parcela_3x = valordavenda / 3;
    comissao5_av = (valordavenda * 0.9) * 0.05;
    comissao5_3x = valordavenda * 0.05;
    
    printf("%lf\n%lf\n%f\n%f\n", desconto10, parcela_3x, comissao5_av, comissao5_3x);
}