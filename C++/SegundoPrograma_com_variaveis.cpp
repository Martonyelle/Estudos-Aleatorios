#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h> //Blibioteca universal, dispensa a utilização das blibiotecas acima, sempre utilizar essa.

using namespace std;// Este comando é para utilizar o cout e endl sem precisar colocar o std::

int main()
{
    int idade;
    float salario, altura;
    char genero;
    string nome;

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    nome = "Maria Silva";

    cout << fixed << setprecision(2); //Esse comando é para fixar o numero de casas decimais.
    cout << "IDADE = " << idade << endl;
    cout << "SALARIO = " << salario << endl;
    cout << "ALTURA = " << altura << endl;
    cout << "GENERO = " << genero << endl;
    cout << "NOME = " << nome << endl;

    return 0;
}