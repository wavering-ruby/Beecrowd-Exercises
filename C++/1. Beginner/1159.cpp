#include <iostream>
using namespace std;

int main(){
    int n;
    
    while(cin >> n && n != 0){
        
        int sum = 0;
        
        for(int i = 0; i != 5; i++){
            if(n % 2 == 0){
                sum += n;
            } else {
                n++;
                sum = n;
            }
            
            n += 2;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}