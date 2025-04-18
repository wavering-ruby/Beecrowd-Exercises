#include <iostream>
#include <iomanip>

int main(){
    double r;
    double pi = 3.14159;

    std::cin >> r;

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << ((4 / 3.0) * pi * (r * r * r)) << std::endl;

    return 0;
}