#include <iostream>
using namespace std;

int main(){
    int j = 60;
    for(int i = 1; i < 99; i = i + 3){
        if(j >= 0){
            cout << "I=" << i << " " << "J=" << j << endl;
            j = j - 5;
        }
    }
    
    return 0;
}