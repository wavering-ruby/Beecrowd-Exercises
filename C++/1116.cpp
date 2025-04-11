#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  
  cin >> n;
  
  float t[n];
  float b[n];
  
  for(int i = 0; i < n; i++){
    cin >> t[i] >> b[i];
  }
  
  cout << fixed << setprecision(1);
  
  for(int i = 0; i < n; i++){
      if(t[i] == 0){
          cout << 0.0 << endl;
      } else if(b[i] == 0.0){
          cout << "divisao impossivel" << endl;
      } else {
          cout << t[i] / b[i] << endl;
      }
  }
  return 0;
}