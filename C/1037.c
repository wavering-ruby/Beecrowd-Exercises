#include <stdio.h>

int main()
{
    float timer;
    scanf("%f", &timer);
    
    if(timer <= 25 && timer >= 0){
        printf("Intervalo [0,25]\n");
    } else if(timer <= 50 && timer > 25){
        printf("Intervalo (25,50]\n");
    } else if(timer <= 75 && timer > 50){
        printf("Intervalo (50,75]\n");  
    } else if(timer <= 100 && timer > 75){
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
    return 0;
}