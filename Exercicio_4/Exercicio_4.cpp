// Exercicio_4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Insira o primeiro numero: ";
    int num1{};
    cin >> num1;
    cout << "Insira o segundo numero: ";
    int num2{};
    cin >> num2;
    int num3{ num1 + num2 };
    cout << "O resultado de: " << num1 << " + " << num2 <<  " = " << num3 << ".";
}

