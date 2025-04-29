#include <stdio.h>
 
int main() {
    int pc1, it1, pc2, it2;
    float val1, val2, valTot;
    
    scanf("%d %d %f", &pc1, &it1, &val1);
    scanf("%d %d %f", &pc2, &it2, &val2);
    
    valTot = it1 * val1 + it2 * val2;
    printf("VALOR A PAGAR: R$ %.2lf\n", valTot);
    return 0;
}