#include <iostream>
#include <iomanip>

int main(){
    std::string name;
    double sal, comm;
    
    std::cin >> name >> sal >> comm;
    
    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << sal + (comm * 0.15) << std::endl;

    return 0;
}