#include <iostream>
using namespace std;;

int main(){
    int num;
    int pair = 0, odd = 0, pos = 0, neg = 0;
    
    for(int i = 1; i <= 5; i++){
        cin >> num;
        
        if(num % 2 == 0){   
            pair++;
        }
        
        if(num % 2 != 0){
            odd++;
        }
        
        if(num > 0){
            pos++;
        }
        
        if(num < 0){
            neg++;
        }
    }
    
    cout << pair << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}