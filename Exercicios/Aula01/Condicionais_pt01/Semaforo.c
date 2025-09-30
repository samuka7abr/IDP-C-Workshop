#include <stdio.h>
#include <string.h>
 
int main() {
    char cor[20];
    scanf("%s", cor);
 
    if (strcmp(cor, "verde") == 0) {
        printf("Acelere\n");
    } else if (strcmp(cor, "amarelo") == 0) {
        printf("Diminua a velocidade\n");
    } else if (strcmp(cor, "vermelho") == 0) {
        printf("Pare\n");
    }
 
    return 0;
}
