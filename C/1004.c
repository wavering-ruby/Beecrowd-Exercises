#include <stdio.h>
 
int main() {
 
    int a, b, PROD;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    PROD = a * b; // A ordem dos valores não afeta o produto
    
    printf("PROD = %d\n", PROD);
    
    return 0;
}