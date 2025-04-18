#include <iostream>
using namespace std;

int main(){
    int j = 60;
    for(int i = 1; i <= 9; i = i + 2){
        for(int j = 7; j >= 5; j--){
            cout << "I=" << i << " " << "J=" << j << endl;
        }
    }
    
    return 0;
}