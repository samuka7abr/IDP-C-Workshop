#include <stdio.h>
 
int main() {
    int f, t;
    scanf("%d %d", &f, &t);
 
    double velocidade = (double) f / t;
    double tempo_dobrado = (double) f / (velocidade * 2);
 
    printf("Velocidade media: %.2lf MB/s\n", velocidade);
    printf("Tempo com velocidade dobrada: %.2lf s\n", tempo_dobrado);
 
    return 0;
}
