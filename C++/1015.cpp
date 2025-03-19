#include <iostream>
#include <iomanip>
#include <math.h>
 
int main(){
    float x1, y1, x2, y2, Dis;

    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    
    Dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    std::cout << std::fixed << std::setprecision(4);
    std::cout << Dis << std::endl;
    
    return 0;
}