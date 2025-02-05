#include <stdio.h>
 
int main() {
    double R, pi, Vol;
    
    scanf("%lf", &R);
    pi = 3.14159;
    
    Vol = (4.0/3)*pi*(R*R*R);
    printf("VOLUME = %.3lf\n", Vol);
    return 0;
}