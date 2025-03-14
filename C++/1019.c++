#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    
    int m = t / 60;
    
    int h = m / 60;
    
    m = m - (h * 60);
    
    int s = t - ((h * 60) * 60) - (m * 60);
    
    std::cout << h << ":" << m << ":" << s << std::endl;

    return 0;
}