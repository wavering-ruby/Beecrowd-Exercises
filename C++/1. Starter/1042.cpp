#include <iostream>
 
int main(){
    int a, b, c;
    
    std::cin >> a >> b >> c;
    
    int arr[] = {a, b, c};
    
    for(int i = 0; i < 2; i++){ //2 significa que é até o tamanho do vetor -1
        for(int j = i + 1; j < 3; j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    std::cout << arr[0] << "\n" << arr[1] << "\n" << arr[2] << std::endl;
    std::cout << "\n" << a << "\n" << b << "\n" << c << std::endl;
    
    return 0;
}