#include <iostream>

using namespace std;

int main() {
    const int tamanho = 5;
    int array[tamanho];
    int soma = 0;


    cout << "Digite " << tamanho << " valores inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << i+1 << ": ";
        cin >> array[i];
        soma += array[i];
    }


    int *ptr = array;
    double media = static_cast<double>(soma) / tamanho;
    cout << "\nA media dos valores e: " << media << endl;

    return 0;
}
