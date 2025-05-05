#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n;
    
    cin >> n;
    
    double v[100];
    
    // v[0] = n;
    
    for(int i = 0; i < 100; i++){
        if(i > 0){
            v[i] = v[i - 1] / 2.0;
        } else {
            v[i] = n;
        }

        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << v[i] << endl;
    }

    return 0;
}