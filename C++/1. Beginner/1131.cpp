#include <iostream>
using namespace std;

int main(){
    int g, i;
             // i  e  g
    int v[3] = {0, 0, 0};
    
    int op;
    
    while(true){
        cin >> g >> i;
        
        if(g > i){
            v[0]++;
        } else if(i > g){
            v[2]++;
        } else {
            v[1]++;
        }
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        
        cin >> op;
        
        if(op == 2){
            cout << v[0] + v[1] + v[2] << " grenais" << endl;
            cout << "Inter:" << v[0] << endl;
            cout << "Gremio:" << v[2] << endl;
            cout << "Empates:" << v[1] << endl;
            
            if(v[0] > v[2]){
                cout << "Inter venceu mais" << endl;
            } else if(v[2] > v[0]){
                cout << "Gremio venceu mais" << endl;
            } else {
                cout << "Nao houve vencendor" << endl;
            }
            
            break;
        }
    }

    return 0;
}