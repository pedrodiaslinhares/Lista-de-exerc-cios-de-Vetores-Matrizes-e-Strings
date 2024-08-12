#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int n;

    cout << "Digite o numero de elementos (maximo 10): ";
    cin >> n;


    if (n < 1 || n > MAX_SIZE) {
        cerr << "Numero de elementos invalido. Deve ser entre 1 e 10." << endl;
        return 1;
    }

    int elementos[MAX_SIZE];

    cout << "Digite " << n << " elementos inteiros positivos:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> elementos[i];
        if (elementos[i] < 0) {
            cerr << "Elemento invalido. Deve ser um inteiro positivo." << endl;
            return 1;
        }
    }


    int maior1 = -1;
    int maior2 = -1;

    for (int i = 0; i < n; ++i) {
        if (elementos[i] > maior1) {
            maior2 = maior1;
            maior1 = elementos[i];
        } else if (elementos[i] > maior2 && elementos[i] < maior1) {
            maior2 = elementos[i];
        }
    }


    if (maior2 == -1 && n > 1) {
        cout << "Nao ha dois valores distintos suficientes para determinar o segundo maior." << endl;
    } else {
        cout << "Os 2 maiores elementos sao: " << maior1 << " e " << maior2 << endl;
    }


    int soma = 0;
    for (int i = 1; i < n; i += 2) {
        if (elementos[i] % 2 == 0) {
            soma += elementos[i];
        }
    }

    cout << "A soma dos elementos pares em posicoes impares e: " << soma << endl;

    return 0;
}
