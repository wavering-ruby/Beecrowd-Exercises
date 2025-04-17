#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float n;
    float v[2];
    int cont = 0;
    cout << fixed << setprecision(2);
    
    while(true){
        if(cont != 2){
            cin >> n;
        
            if(n <= 10.0 && n >= 0){
                v[cont] = n;
                cont++;
            } else {
                cout << "nota invalida" << endl;
            }
        }
        
        if(cont == 2){
            if(v[0] != -1){
                cout << "media = " << (v[0] + v[1]) / 2 << endl;
                v[0] = -1;
            }
            
            cout << "novo calculo (1-sim 2-nao)" << endl;
            
            cin >> n;
            
            if(n == 1){
                cont = 0;
            } else if (n == 2){
                break;
            }
        }
    }
    
    return 0;
}