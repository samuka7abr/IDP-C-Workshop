#include <stdio.h>
#include <math.h>
 
int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
 
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
 
    if (d < 5) {
        printf("Muito perto\n");
    } else if (d <= 20) {
        printf("Distancia media\n");
    } else {
        printf("Muito longe\n");
    }
 
    return 0;
}
