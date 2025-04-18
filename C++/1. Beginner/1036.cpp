#include <iostream>
#include <math.h>
#include <iomanip>
 
int main(){
    double a, b, c;

    std::cin >> a >> b >> c;
    
    //-b +- \/(b² - 4 * a * c)/2*a
    double delta, x1, x2;
    delta = (b * b) - 4 * a * c;
    
    
    if(a == 0 || delta < 0){
        std::cout << "Impossivel calcular" << std::endl;
        return 0;
    }
    
    x1 = (-b + sqrt(delta))/(2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "R1 = " << x1 << std::endl;
    std::cout << "R2 = " << x2 << std::endl;
    return 0;
}