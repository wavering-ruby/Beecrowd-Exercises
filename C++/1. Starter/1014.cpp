#include <iostream>
#include <iomanip>
 
int main(){
    int x;
    float y, z;

    std::cin >> x >> y;
    
    z = x / y;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << z << " km/l" << std::endl;
    
    return 0;
}