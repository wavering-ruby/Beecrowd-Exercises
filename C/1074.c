#include <stdio.h>
 
int main() {
    int n, valor;
    int i = 0;
    
    scanf("%d", &n);
    while(i < n){
        scanf("%d", &valor);
        if(valor != 0){
            if(valor > 0){
                if (valor % 2 == 0){
                    printf("EVEN POSITIVE\n");
                } else {
                    printf("ODD POSITIVE\n");
                }
            } else {
                if(valor % 2 == 0){
                    printf("EVEN NEGATIVE\n");
                } else {
                    printf("ODD NEGATIVE\n");
                }
            }
        } else {
            printf("NULL\n");
        }
        i++;
    }
 
    return 0;
}