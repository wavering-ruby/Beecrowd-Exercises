#include <stdio.h>
#include <math.h>
 
int main() {
    float x1, x2;
    float y1, y2;
    float Dis;
    
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    Dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("%.4f\n", Dis);
    return 0;
}