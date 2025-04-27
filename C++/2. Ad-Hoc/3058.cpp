#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    float minor_value = 999999999999999999999999999999999.99;
    
    for(int i = 0; i < n; i++){
        float p;
        int g; 
        cin >> p >> g;
        
        if((p * 1000) / g < minor_value){
            minor_value = (p * 1000) / g;
        }
    }
    
    cout << fixed << setprecision(2);
    cout << minor_value << endl;
    return 0;
}