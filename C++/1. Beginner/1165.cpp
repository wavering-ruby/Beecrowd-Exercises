#include <iostream>
using namespace std;

int main(){
    int n;
    int a;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        int b = 0;
        
        for(int j = 2; j <= (a / 2); j++){
            if(a % j == 0){
                b++;
            }
        }
        
        if(b > 0){
            cout << a << " nao eh primo" << endl;
        } else {
            cout << a << " eh primo" << endl;
        }
    }
    
    return 0;
}