#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

int main() {
    vector<Livro> biblioteca;
    string tituloDesejado;


    cout << "Digite o titulo do livro que voce esta procurando: ";

    getline(cin, tituloDesejado);
    char continuar;
    do {
        Livro novo_livro;

        cout << "Digite o titulo do livro: ";
        getline(cin, novo_livro.titulo);

        cout << "Digite o nome do autor: ";
        getline(cin, novo_livro.autor);

        cout << "Digite o ano de publicacao: ";
        cin >> novo_livro.anoPublicacao;
        cin.ignore();


        biblioteca.push_back(novo_livro);


        if (novo_livro.titulo == tituloDesejado) {
            cout << "\n O livro desejado foi encontrado!\n";

            break;
        }


        cout << "\n Deseja adicionar outro livro? (S/N): ";
        cin >> continuar;
        cin.ignore();
    } while (continuar == 'S' || continuar == 's');


    cout << "\n Livros registrados:\n";
    for (const auto& livro : biblioteca) {
        cout << "Titulo: " << livro.titulo << endl;
        cout << "Autor: " << livro.autor << endl;
        cout << "Ano de publicacao: " << livro.anoPublicacao << endl << endl;
    }

    return 0;
}
