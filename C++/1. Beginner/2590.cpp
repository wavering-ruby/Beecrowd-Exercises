#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    // Pay attention to the float
    // In C++ a operation between int result a int, so, to get a decimal number
    // as a result, you need to turn some of the variables a float.
    float n;
    
    cin >> n >> x >> y;
    
    float r = n / (x + y);
    
    cout << fixed << setprecision(2);
    cout << r << endl;

    return 0;
}