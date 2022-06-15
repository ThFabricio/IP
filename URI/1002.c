#include <stdio.h>
 
int main() {
 
    double raio, n, area;
    n = 3.14159;
    scanf("%lf", &raio);
    area= n*pow(raio, 2);
    printf("A=%.4lf\n", area);
 
    return 0;
}