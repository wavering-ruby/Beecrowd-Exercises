#include <stdio.h>
 
int main() {
    int cod, quant;
    double valor;
    
    scanf("%d %d", &cod, &quant);
    
    switch(cod){
        case 1:
            valor = quant * 4.00;
            printf("Total: R$ %.2lf\n", valor);
        break;
        
        case 2:
            valor = quant * 4.50;
            printf("Total: R$ %.2lf\n", valor);
        break;
        
        case 3:
            valor = quant * 5.00;
            printf("Total: R$ %.2lf\n", valor);
        break;
        
        case 4:
             valor = quant * 2.00;
            printf("Total: R$ %.2lf\n", valor);
        break;
        
        case 5:
            valor = quant * 1.50;
            printf("Total: R$ %.2lf\n", valor);
        break;
    }
    return 0;
}