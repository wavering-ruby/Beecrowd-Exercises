#include <stdio.h>
 
int main() {
    int a, b, c, d;
    int DIFE;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    DIFE = (a * b - c * d);
    
    printf("DIFERENCA = %d\n", DIFE);
    return 0;
}