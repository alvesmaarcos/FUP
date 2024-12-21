#include <stdio.h>

int main() {
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    int orig_a = a;
    a = b;
    b = orig_a;
    printf("%d\n%d", a, b);
}