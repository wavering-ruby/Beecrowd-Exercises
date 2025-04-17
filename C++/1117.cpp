#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float n;
    float v[2] = {-1, -1};
    cout << fixed << setprecision(2);
    
    while(true){
        cin >> n;
        
        if(n <= 10.0 && n >= 0){
            if(v[0] == -1){
                v[0] = n;
            } else {
                v[1] = n;
                cout << "media = " << (v[0] + v[1]) / 2 << endl;
                break;
            }
        } else {
            cout << "nota invalida" << endl;
        }
    }
    
    
    
    return 0;
}