//1)a) (v) O operador & permite-nos obter o endereço de uma variável. Permite também obter o endereço de um ponteiro. - Verdadeiro.
//b) (f) Se x é um inteiro e ptr um ponteiro para inteiros e ambos contêm no seu interior o número 100, então x+1 e ptr+1 apresentarão o número 101. - Falso.
//c) (f) O operador * nos permite obter o endereço de uma variável. - Falso.
//d) (v) Os ponteiros são variáveis que apontam para endereços na memória. - Verdadeiro.

//2) Suponhamos que:
//a tenha o valor 10,
//b tenha o valor 20, e
//ptr seja um ponteiro apontando para algum valor, por exemplo, 30.
//Então, cout << a << b << *ptr; se expandirá para cout << 10 << 20 << *ptr;.
//Se *ptr aponta para um valor, digamos 30, a expressão se tornaria cout << 10 << 20 << 30;.
//Assim, ao imprimir isso, o resultado seria 102030.

//3) Supondo que a tenha o valor 10 e b tenha o valor 20, e agora ptr aponta para b, então *ptr irá desreferenciar ptr para obter o valor armazenado no endereço apontado por ptr, que é o valor de b.
//Assim, cout << a << b << *ptr; se expandirá para cout << 10 << 20 << *ptr;, que se tornará cout << 10 << 20 << 20;.
//Portanto, ao imprimir isso, o resultado será 102020.

//4)
//Se agora tivermos *ptr = 20, qual o resultado?
//endereço  Variavel  conteudo
//1000        ptr         1002
//1001
//1002           a          5
//1003           b          7
//1004
//r:
//Isso significa que o conteúdo da variável b mudou para 20.
//Então, se quisermos imprimir o conteúdo de b, faríamos cout << b;, o que resultaria em 20.
//Para obter o endereço da variável b, poderíamos usar &b, o que resultaria em 1003.

//5) int *ptr; // Declaração de um ponteiro para um inteiro
//Neste exemplo, ptr é declarado como um ponteiro para um inteiro. O asterisco (*) antes de ptr indica que ptr é um ponteiro.

//6) Uma variável do tipo ponteiro contém um endereço de memória como seu valor. Em outras palavras, em vez de armazenar o valor diretamente, uma variável ponteiro armazena o endereço de memória onde o valor está localizado.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];


    cout << "Digite " << tamanho << " valores inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << i+1 << ": ";
        cin >> vetor[i];
    }


    cout << "\nConteudo do vetor na ordem normal:" << endl;
    int *ptr = vetor;
    for (int i = 0; i < tamanho; ++i) {
        cout << *ptr << " ";
        ptr++;
    }


    cout << "\nConteudo do vetor na ordem inversa:" << endl;
    ptr = vetor + tamanho - 1;
    for (int i = 0; i < tamanho; ++i) {
        cout << *ptr << " ";
        ptr--;
    }

    cout << endl;

    return 0;
}
