#include <stdio.h>
 
int main() {
    int i, n;
    n = 100;
    
    for(i = 2; i <= n; i = i + 2){
        printf("%d\n", i);
    }
    return 0;
}