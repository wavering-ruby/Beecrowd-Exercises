#include <iostream>
#include <iomanip>

int main(){
    int n, h;
    float sal;
    
    std::cin >> n >> h >> sal;
    
    std::cout << "NUMBER = " << n << std::endl;
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << h * sal << std::endl;

    return 0;
}