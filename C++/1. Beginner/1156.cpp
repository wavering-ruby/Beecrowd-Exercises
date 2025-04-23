#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double s = 1.0;
    int j = 1;
    
    for(int i = 2; i <= 39; i += 2){
        j = j * 2;
        s += (1.0 + i) / j;
    }
    
    cout << fixed << setprecision(2);
    cout << s << endl;

    return 0;
}