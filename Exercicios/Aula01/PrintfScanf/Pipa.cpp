#include <stdio.h>
 
int main() {
    int v, p;
    scanf("%d", &v);
    scanf("%d", &p);
 
    double valor_individual = (double)v / p;
 
    printf("Cada pessoa deve pagar: R$ %.2f\n", valor_individual);
 
    return 0;
}

