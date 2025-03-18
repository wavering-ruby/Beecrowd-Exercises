#include <iostream>
#include <iomanip>

int main(){
    int pc1, it1;
    float val1;
    
    int pc2, it2;
    float val2;

    std::cin >> pc1 >> it1 >> val1;
    std::cin >> pc2 >> it2 >> val2;

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << (it1 * val1) + (it2 * val2) << std::endl;

    return 0;
}