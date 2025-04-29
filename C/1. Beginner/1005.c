#include <stdio.h>

int main(){
    double nota1, nota2, MEDIA;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);

    MEDIA = ((nota1 * 3.5) + (nota2 * 7.5))/11;
    
    printf("MEDIA = %.5lf\n", MEDIA);
    
    return 0;
} 
