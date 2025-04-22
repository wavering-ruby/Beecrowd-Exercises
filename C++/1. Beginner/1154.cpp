#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float sum = 0;
    int cont = 0;
    int age;
    
    while(true){
        cin >> age;
        
        if(age < 0){
            break;
        }
        
        sum += age;
        cont++;
    }
    
    cout << fixed << setprecision(2);
    cout << sum/cont << endl;

    return 0;
}