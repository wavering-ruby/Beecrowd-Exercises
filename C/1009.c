#include <stdio.h>

int main() {
    char nome[100];  
    scanf("%99s", nome);  

    double n, m;
    scanf("%lf", &n);  
    scanf("%lf", &m);  
    
    double sal = n + (m * 0.15); 

    printf("TOTAL = R$ %.2lf\n", sal);
    return 0;
}