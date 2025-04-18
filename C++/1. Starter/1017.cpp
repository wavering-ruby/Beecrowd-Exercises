#include <iostream>
#include <iomanip>
 
int main(){
    int t, vm;

    std::cin >> t >> vm;
    
    float d = (t * vm) / 12.0;
    
    std::cout << std::fixed << std::setprecision(3);
    std::cout << d << std::endl;
    
    return 0;
}