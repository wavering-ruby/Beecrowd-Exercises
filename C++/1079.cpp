#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    
    cin >> n;
    
    float v[n] = {};
    
    for(int i = 0; i < n; i++){
        float a, b, c = 0;
        
        cin >> a >> b >> c;
        
        v[i] = ((a * 2) + (b * 3) + (c * 5))/10;
    }
    
    cout << fixed << setprecision(1);
    
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }

    return 0;
}