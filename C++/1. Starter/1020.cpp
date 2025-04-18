#include <iostream>

int main(){
    int d;
    std::cin >> d;
    
    int y = d / 365;
    
    d = d - (365 * y);
    
    int m = d / 30;
    
    d = d - (30 * m);
    
    std::cout << y << " ano(s)" << std::endl;
    std::cout << m << " mes(es)" << std::endl;
    std::cout << d << " dia(s)" << std::endl;

    return 0;
}