#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    
    for(int i = 0; i < 6; i++){
        if(num % 2 != 0){
            cout << num << endl;
            num++;
        } else {
            num++;
            i--;
        }
    }
    
    return 0;
}