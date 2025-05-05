#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int>& v, bool is_odd) {
    for (int i = 0; i < v.size(); i++) {
        if (is_odd) {
            cout << "impar[" << i << "] = " << v[i] << endl;
        } else {
            cout << "par[" << i << "] = " << v[i] << endl;
        }
    }
}


int main(){
    vector<int> odds;
    vector<int> even;
    int o_cont = 0;
    int e_cont = 0;
    int n;
    
    for(int i = 0; i < 15; i++){
        cin >> n;
        
        if(n % 2 == 0){
            even.push_back(n);
            e_cont++;
        } else {
            odds.push_back(n);
            o_cont++;
        }
        
        if(e_cont == 5){
            print_vector(even, false);
            even.clear();
            e_cont = 0;
        } else if(o_cont == 5){
            print_vector(odds, true);
            odds.clear();
            o_cont = 0;
        }
    }
    
    print_vector(odds, true);
    print_vector(even, false);

    return 0;
}