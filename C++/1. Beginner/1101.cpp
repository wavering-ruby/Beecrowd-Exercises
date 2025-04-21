#include <iostream>
using namespace std;

int main(){
    int x, y;
    int sum = 0;

    while(true){
        cin >> x >> y;
        
        // Ordenando para do menor para o maior
        if(x > y){
            int temp = y;
            y = x;
            x = temp;
        }
        
        if(x <= 0 || y <= 0){
            break;
        }
        
        for(int i = x; i <= y; i++){
            sum += i;
            cout << i << " ";
        }
        
        cout << "Sum=" << sum << endl;
        sum = 0;
    }

    return 0;
}