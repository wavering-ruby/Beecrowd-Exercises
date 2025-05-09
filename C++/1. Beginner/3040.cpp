#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    
    cin >> n;
    
    unsigned int height, thickness, branches;
    
    for(int i = 0; i < n; i++){
        cin >> height >> thickness >> branches;
        
        if((height >= 200 && height <= 300) && thickness >= 50 && branches >= 150){
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }

    return 0;
}