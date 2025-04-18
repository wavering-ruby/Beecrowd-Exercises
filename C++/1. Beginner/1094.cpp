    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main(){
        int n;
        float v[3] = {0.0, 0.0, 0.0};
        
        cin >> n;
        
        for(int i = 0; i < n; i++){
            int num;
            char a;
            
            cin >> num >> a;
            
            if(a == 'C'){ // Total de Coelhos
                v[0] = v[0] + num;
            } else if(a == 'R'){
                v[1] = v[1] + num;
            } else {
                v[2] = v[2] + num;
            }
        }
        
        int sum = v[0] + v[1] + v[2];
        
    
        cout << "Total: " << sum << " cobaias" << endl;
        cout << "Total de coelhos: " << v[0] << endl;
        cout << "Total de ratos: " << v[1] << endl;
        cout << "Total de sapos: " << v[2] << endl;
        
        cout << fixed << setprecision(2);
        cout << "Percentual de coelhos: " << (v[0] / sum) * 100.0 << " %" << endl;
        cout << "Percentual de ratos: " << (v[1] / sum) * 100.0 << " %" << endl;
        cout << "Percentual de sapos: " << (v[2] / sum) * 100.0  << " %" << endl;
    }