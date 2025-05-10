#include <iostream>
using namespace std;

int main() {
    unsigned int h;
    cin >> h;
    
    if(h > 0){
        for(int i = 0; i < h - 1; i++){
            cout << "Ho ";
        }
        
        cout << "Ho!" << endl;
    }
    return 0;
}