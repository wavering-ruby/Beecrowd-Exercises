#include <stdio.h>
 
int main() {
    int a, b, c, ab, bc;
    
    scanf("%d %d %d", &a, &b, &c);
    
    ab = (a + b + abs(a - b))/2;
    
    bc = (c + ab + abs(ab - c))/2;
    
    printf("%d eh o maior\n", bc);
    return 0;
}