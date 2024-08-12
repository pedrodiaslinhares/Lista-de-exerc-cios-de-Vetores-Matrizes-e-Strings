#include <iostream>
#include <cstring>
using namespace std;

int main() {

    const int MAX_SIZE = 100;
    char str[MAX_SIZE];


    cout << "Digite uma string: ";
    cin.getline(str, MAX_SIZE);

    int count = 0;


    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a') {
            str[i] = 'b';
            ++count;
        }
    }


    cout << "Numero de caracteres modificados: " << count << endl;
    cout << "String modificada: " << str << endl;

    return 0;
}
