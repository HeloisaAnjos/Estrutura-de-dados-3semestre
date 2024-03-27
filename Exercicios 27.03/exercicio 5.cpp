#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pedido {
    string nomePrato;
    int quantidade;
    double precoTotal;
};

int main() {
    vector<Pedido> pedidos;
    double precoDesejado;


    cout << "Digite o preco que indica o termino dos pedidos: ";
    cin >> precoDesejado;

    char continuar;

    do {

        Pedido novo_pedido;


        cout << "Digite o nome do prato: ";
        cin.ignore();
        getline(cin, novo_pedido.nomePrato);

        cout << "Digite a quantidade: ";
        cin >> novo_pedido.quantidade;

        cout << "Digite o preco total: ";
        cin >> novo_pedido.precoTotal;


        pedidos.push_back(novo_pedido);


        if (novo_pedido.precoTotal == precoDesejado) {
            cout << "\nTermino dos pedidos atingido.\n";
            break;
        }

        cout << "\nDeseja adicionar outro pedido? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');


    cout << "\nPedidos registrados:\n";
    for (const auto& pedido : pedidos) {
        cout << "Nome do prato: " << pedido.nomePrato << endl;
        cout << "Quantidade: " << pedido.quantidade << endl;
        cout << "Preco total: " << pedido.precoTotal << endl << endl;
    }

    return 0;
}
