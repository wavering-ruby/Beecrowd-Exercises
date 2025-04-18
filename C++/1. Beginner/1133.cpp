#include <iostream>
using namespace std;

int main(){
    int x, y;
    
    cin >> x >> y;
    
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    // O +1 é para ele evitar de pegar o número em x KKKKKKKKKK
    for(int i = x + 1; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
        }
    }
    
    return 0;
}