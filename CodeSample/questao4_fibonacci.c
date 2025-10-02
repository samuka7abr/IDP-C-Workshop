#include <stdio.h>

// Conteúdo da função - COMPLETAR
int fibonacci(/* parâmetros para preencher */) {
    // TODO: Implementar Fibonacci recursivo
    // F(0) = 0, F(1) = 1
    // Para n > 1: F(n) = F(n-1) + F(n-2);
}

int main() {
    int n = 7;
    int resultado = fibonacci(n);  // Chamando a função
    
    printf("Fibonacci(%d) = %d\n", n, resultado);
    return 0;
}
