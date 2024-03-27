#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main() {
    vector<Paciente> pacientes;
    char continuar;

    do {

        Paciente novo_paciente;


        cout << "Digite o nome do paciente: ";
        getline(cin, novo_paciente.nome);

        cout << "Digite a idade do paciente: ";
        cin >> novo_paciente.idade;
        cin.ignore();

        cout << "Digite o sintoma do paciente: ";
        getline(cin, novo_paciente.sintoma);


        pacientes.push_back(novo_paciente);


        cout << "Deseja adicionar outro paciente? (S/N): ";
        cin >> continuar;
        cin.ignore();
    } while (continuar == 'S' || continuar == 's');


    cout << "\nPacientes registrados:\n";
    for (const auto& paciente : pacientes) {
        cout << "Nome: " << paciente.nome << endl;
        cout << "Idade: " << paciente.idade << endl;
        cout << "Sintoma: " << paciente.sintoma << endl << endl;
    }

    return 0;
}
