#include <iostream>
#include <iomanip>  // Para std::fixed e std::setprecision

int main() {
    std::string nome;  // Declara uma variável para armazenar o nome
    std::getline(std::cin, nome);  // Lê uma linha da entrada padrão como uma string

    double n, m;
    std::cin >> n;  // Lê o valor de n
    std::cin >> m;  // Lê o valor de m

    double sal = n + (m * 0.15);  // Calcula o salário

    // Define a precisão e exibe o resultado formatado
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " << sal << std::endl;

    return 0;
}
