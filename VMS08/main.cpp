#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    int str1Size, str2Size;

    cout << "Digite a primeira string: ";
    getline(cin, str1);

    cout << "Digite a segunda string: ";
    getline(cin, str2);

    cout << "Primeira string: " << str1 << endl;
    cout << "Segunda string: " << str2 << endl;


    str1Size = str1.length();
    str2Size = str2.length();

    if (str1Size  >= 2) {
        cout << "Segunda letra da primeira string: " << str1[1] << endl;
    }

    if (str2Size  >= 2) {
        cout << "Penúltima letra da segunda string: " << str2[str2Size- 2] << endl;
    }

    return 0;
}
