#include <iostream>
#include <string>

using namespace std;


struct Filme {
    string titulo;
    double notaEnredo;
    double notaAtuacao;
    double notaEfeitosEspeciais;
};

int main() {
    char continuar;
    double totalEnredo = 0, totalAtuacao = 0, totalEfeitosEspeciais = 0;
    int filmesAvaliados = 0;

    do {

        Filme novo_filme;


        cout << "Digite o titulo do filme: ";
        getline(cin, novo_filme.titulo);

        cout << "Avalie o enredo do filme (0-10): ";
        cin >> novo_filme.notaEnredo;

        cout << "Avalie a atuacao do filme (0-10): ";
        cin >> novo_filme.notaAtuacao;

        cout << "Avalie os efeitos especiais do filme (0-10): ";
        cin >> novo_filme.notaEfeitosEspeciais;

        cin.ignore();


        double media = (novo_filme.notaEnredo + novo_filme.notaAtuacao + novo_filme.notaEfeitosEspeciais) / 3.0;


        cout << "Media das notas para o filme " << novo_filme.titulo << "': " << media << endl << endl;


        totalEnredo += novo_filme.notaEnredo;
        totalAtuacao += novo_filme.notaAtuacao;
        totalEfeitosEspeciais += novo_filme.notaEfeitosEspeciais;
        filmesAvaliados++;


        cout << "Deseja avaliar outro filme? (S/N): ";
        cin >> continuar;

        cin.ignore();

    } while (continuar == 'S' || continuar == 's');


    double mediaEnredoGeral = totalEnredo / filmesAvaliados;
    double mediaAtuacaoGeral = totalAtuacao / filmesAvaliados;
    double mediaEfeitosEspeciaisGeral = totalEfeitosEspeciais / filmesAvaliados;


    cout << "\nMedia geral das notas:\n";
    cout << "Enredo: " << mediaEnredoGeral << endl;
    cout << "Atuacao: " << mediaAtuacaoGeral << endl;
    cout << "Efeitos Especiais: " << mediaEfeitosEspeciaisGeral << endl;

    return 0;
}
