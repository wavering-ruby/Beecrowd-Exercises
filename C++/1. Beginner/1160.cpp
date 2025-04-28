#include <iostream>
using namespace std;

int main(){
    int t;
    
    cin >> t;
    
    int pa, pb;
    double g1, g2;
    
    for(int i = 0; i < t; i++){
        int c1 = 0;
        int c2 = 0;
        int cont = 0;
        
        cin >> pa >> pb >> g1 >> g2;
        
        while(true){
            c1 = pa + (pa * (g1 / 100));
            pa = c1;
            // cout << pa << " | " << (pa * (g1 / 100)) << " | " << pa << endl;
            
            c2 = pb + (pb * (g2 / 100));
            pb = c2;
            // cout << pb << " | " << (pb * (g2 / 100)) << " | " << pb << endl;
            
            cont++;
            
            if(cont > 100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
            
            if(c1 > c2){
                cout << cont << " anos." << endl;
                break;
            }
        }
    }
    
    return 0;
}