#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10; // Tamanho dos vetores
    int V1[SIZE], V2[SIZE];

    // Leitura dos elementos para o vetor V1
    std::cout << "Digite 10 elementos inteiros para o vetor V1:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> V1[i];
    }

    // Construção do vetor V2 com base nas regras fornecidas
    for (int i = 0; i < SIZE; ++i) {
        if (i % 2 == 0) { // Índice par
            V2[i] = V1[i] * 5;
        } else { // Índice ímpar
            V2[i] = V1[i] + 5;
        }
    }

    // Exibição do conteúdo dos vetores
    std::cout << "Conteúdo do vetor V1:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << V1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Conteúdo do vetor V2:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << V2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
