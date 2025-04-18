#include <iostream>
using namespace std;

int main(){
    int k = 7;
    for(int i = 1; i <= 9; i = i + 2){
        for(int j = k; j >= k - 2; j--){
            cout << "I=" << i << " " << "J=" << j << endl;
        }
        
        k = k + 2;
    }
    
    return 0;
}