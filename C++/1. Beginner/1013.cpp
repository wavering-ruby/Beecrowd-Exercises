#include <iostream>
 
int main(){
    int a, b, c, ab, bc;

    std::cin >> a >> b >> c;
    
    ab = (a + b + abs(a - b))/2;
    
    bc = (c + ab + abs(ab - c))/2;

    std::cout << bc << " eh o maior" << std::endl;
    return 0;
}