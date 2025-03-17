#include <iostream>
#include <iomanip>

int main(){
    double a, b, c, pi;
    pi = 3.14159;
    std::cin >> a >> b >> c;
    
    std::cout << std::fixed << "TRIANGULO: " << std::setprecision(3) << (a * c) / 2 << std::endl;
    std::cout << std::fixed << "CIRCULO: " << std::setprecision(3) <<  (c * c) * pi << std::endl;
    std::cout << std::fixed << "TRAPEZIO: " << std::setprecision(3) << ((a + b) * c) / 2 << std::endl;
    std::cout << std::fixed << "QUADRADO: " << std::setprecision(3) << (b * b) << std::endl;
    std::cout << std::fixed << "RETANGULO: " << std::setprecision(3) << (a * b) << std::endl;
    return 0;
}