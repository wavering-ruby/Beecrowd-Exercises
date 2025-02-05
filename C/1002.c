#include <stdio.h>
 
int main() {
    double area, n, raio;
    
    n = 3.14159;
    
    scanf("%lf", &raio);
    raio = raio*raio;
    
    area = raio * n;
    
    printf("A=%.4lf\n", area);
 
    return 0;
}