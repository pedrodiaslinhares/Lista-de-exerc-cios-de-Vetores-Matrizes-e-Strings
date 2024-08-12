#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    const int NUM_PRODUTOS = 6;
    int quantidade[NUM_PRODUTOS];
    float valor[NUM_PRODUTOS];
    float totalCompra = 0;

    cout << "Quantidade comprada do produto \n";
    for (int i=1; i < NUM_PRODUTOS; i++)
    {
        cout << "Quantidade do produto " << i <<":";
        cin >> quantidade[i];
    }

    cout << "\n Valor de cada produto \n";
    for (int i=1; i < NUM_PRODUTOS; i++)
    {
        cout << "Valor do produto " << i <<":";
        cin >> valor[i];
    }

    cout << "\nValor total a ser pago por cada produto:\n";
    for (int i=1; i < NUM_PRODUTOS; i++)
    {
        float totalProduto = quantidade[i] * valor[i];
        cout << "Produto " << i << ": R$ " << totalProduto << endl;
        totalCompra += totalProduto;
    }

    cout << "\nValor total da compra: R$ " << totalCompra << endl;

    return 0;
}
