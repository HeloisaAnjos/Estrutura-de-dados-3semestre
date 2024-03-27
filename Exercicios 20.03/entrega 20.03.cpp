//1)a) (v) O operador & permite-nos obter o endere�o de uma vari�vel. Permite tamb�m obter o endere�o de um ponteiro. - Verdadeiro.
//b) (f) Se x � um inteiro e ptr um ponteiro para inteiros e ambos cont�m no seu interior o n�mero 100, ent�o x+1 e ptr+1 apresentar�o o n�mero 101. - Falso.
//c) (f) O operador * nos permite obter o endere�o de uma vari�vel. - Falso.
//d) (v) Os ponteiros s�o vari�veis que apontam para endere�os na mem�ria. - Verdadeiro.

//2) Suponhamos que:
//a tenha o valor 10,
//b tenha o valor 20, e
//ptr seja um ponteiro apontando para algum valor, por exemplo, 30.
//Ent�o, cout << a << b << *ptr; se expandir� para cout << 10 << 20 << *ptr;.
//Se *ptr aponta para um valor, digamos 30, a express�o se tornaria cout << 10 << 20 << 30;.
//Assim, ao imprimir isso, o resultado seria 102030.

//3) Supondo que a tenha o valor 10 e b tenha o valor 20, e agora ptr aponta para b, ent�o *ptr ir� desreferenciar ptr para obter o valor armazenado no endere�o apontado por ptr, que � o valor de b.
//Assim, cout << a << b << *ptr; se expandir� para cout << 10 << 20 << *ptr;, que se tornar� cout << 10 << 20 << 20;.
//Portanto, ao imprimir isso, o resultado ser� 102020.

//4)
//Se agora tivermos *ptr = 20, qual o resultado?
//endere�o  Variavel  conteudo
//1000        ptr         1002
//1001
//1002           a          5
//1003           b          7
//1004
//r:
//Isso significa que o conte�do da vari�vel b mudou para 20.
//Ent�o, se quisermos imprimir o conte�do de b, far�amos cout << b;, o que resultaria em 20.
//Para obter o endere�o da vari�vel b, poder�amos usar &b, o que resultaria em 1003.

//5) int *ptr; // Declara��o de um ponteiro para um inteiro
//Neste exemplo, ptr � declarado como um ponteiro para um inteiro. O asterisco (*) antes de ptr indica que ptr � um ponteiro.

//6) Uma vari�vel do tipo ponteiro cont�m um endere�o de mem�ria como seu valor. Em outras palavras, em vez de armazenar o valor diretamente, uma vari�vel ponteiro armazena o endere�o de mem�ria onde o valor est� localizado.

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
