#include <iostream>
#include <stdlib.h>


using namespace std;


int main() {
    int vetor[5];
    int somaImpares = 0;

    std::cout << "Digite " << 5 << " elementos para o vetor:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Elemento " << (i + 1) << ": ";
        std::cin >> vetor[i];
    }

    for (int i = 0; i < 5; ++i) {
        if (vetor[i] % 2 != 0) {
            somaImpares += vetor[i];
        }
    }

    std::cout << "A soma dos elementos impares e: " << somaImpares << std::endl;

    return 0;
}
