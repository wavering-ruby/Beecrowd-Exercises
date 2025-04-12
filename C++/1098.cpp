#include <iostream>
using namespace std;

int main(){
    for(float i = 0; i <= 2.2; i = i + 0.2){
        for(int j = 1; j <= 3; j++){
            cout << "I=" << i << " " << "J=" << j + i << endl;
        }
    }
    
    return 0;
}