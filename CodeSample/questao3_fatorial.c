#include <stdio.h>

// Conteúdo da função - COMPLETAR
int fatorial(/* parâmetros para preencher */) {
    // TODO: Implementar fatorial recursivo
    // Caso base: if (n <= 1) return 1;
    // Caso recursivo: return n * fatorial(n-1);
}

int main() {
    int n = 5;
    int resultado = fatorial(n);  // Chamando a função
    
    printf("%d! = %d\n", n, resultado);
    return 0;
}
