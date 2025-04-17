#include <iostream>
using namespace std;

int main(){
    int password;
    
    int c_password = 2002;
    
    while(true){
        cin >> password;
        
        if(password == c_password){
            cout << "Acesso Permitido" << endl;
            break;
        } else {
            cout << "Senha Invalida" << endl;
        }
    }
    
    return 0;
}