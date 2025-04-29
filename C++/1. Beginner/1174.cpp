#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a[100];
    
    cout << fixed << setprecision(1);
    
    for(int i = 0; i < 100; i++){
        cin >> a[i];
    }
    
    for(int j = 0; j < 100; j++){
        if(a[j] <= 10){
            cout << "A[" << j << "] = " << a[j] << endl;
        }
    }

    return 0;
}