#include <stdio.h>

int main(){
    int t, vm; 

    scanf("%d %d", &t, &vm);
    
    float d = (t * vm) / 12.0;
    
    printf("%.3f\n", d);
    return 0;
}