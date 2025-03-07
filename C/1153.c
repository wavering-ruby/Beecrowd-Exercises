#include <stdio.h>
 
int fatorial(int n){
    if(n > 1){
        return n * fatorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int n, value;
    
    scanf("%d", &n);
    
    value = fatorial(n);
    
    printf("%d\n", value);
 
    return 0;
}