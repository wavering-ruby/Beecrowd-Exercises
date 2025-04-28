#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int num;
    
    for(int i = 0; i < n; i++){
        cin >> num;
        int sum = 0;
        
        for(int j = 1; j < num; j++){
            if(num % j == 0){
                sum = sum + j;
            }
        }
        
        if(sum == num){
            cout << num << " eh perfeito" << endl;
        } else {
            cout << num << " nao eh perfeito" << endl;
        }
    }

    return 0;
}