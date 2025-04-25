#include <iostream>
using namespace std;

int main(){
    int n;
    int x, y;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        int sum = 0;
        
        // Calculando o -1 para ele fazer a última secagem, utilizando while
        while(y != 0){
            if(x % 2 != 0){
                sum += x;
                y--;
            }
            
            x++;
        }
        
        cout << sum << endl;
    }

    return 0;
}