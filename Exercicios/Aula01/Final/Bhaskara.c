#include <stdio.h>
#include <math.h>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
 
    int delta = b * b - 4 * a * c;
 
    if (delta < 0) {
        printf("Raizes inexistentes\n");
    } else {
        double x1 = (-b + sqrt(delta)) / (2.0 * a);
        double x2 = (-b - sqrt(delta)) / (2.0 * a);
 
        if (x1 >= x2) {
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        } else {
            printf("x1 = %.2lf\n", x2);
            printf("x2 = %.2lf\n", x1);
        }
    }
 
    return 0;
}

