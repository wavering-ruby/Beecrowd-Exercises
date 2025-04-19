#include <iostream>
using namespace std;

int main(){
    int x, a, g, d;
    a = g = d = 0;
    
    while(true){
        cin >> x;
        
        if(x == 4){
            cout << "MUITO OBRIGADO" << endl;
            cout << "Alcool: " << a << endl;
            cout << "Gasolina: " << g << endl;
            cout << "Diesel: " << d << endl;
            break;
        } else {
            switch(x){
                case 1:
                    a++;
                break;
                
                case 2:
                    g++;
                break;
                
                case 3:
                    d++;
                break;
            }
        }
    }
    
    return 0;
}