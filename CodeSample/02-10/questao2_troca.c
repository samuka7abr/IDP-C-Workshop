#include <stdio.h>

// Conteúdo da função - COMPLETAR
void troca(/* parâmetros para preencher */) {
    // TODO: Trocar os valores apontados pelos ponteiros
    // Dica: use uma variável temporária int temp = *a;
    // Não precisa retornar nada (void)
}

int main() {
    int a = 5, b = 10;
    
    printf("Antes: a=%d, b=%d\n", a, b);
    
    troca(&a, &b);  // Chamando a função
    
    printf("Depois: a=%d, b=%d\n", a, b);
    return 0;
}
