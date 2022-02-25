#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;

    cout <<"Nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Salario da primeira pessoa: ";
    cin >> salario1;

    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n'); // Comando para limpeza de buffer.
    getline(cin, nome2);
    cout << "Salario da segunda pessoa: ";
    cin >> salario2;

    cout << "Digite uma idade: ";
    cin >> idade;
    cout << "Digite um sexo (F/M): ";
    cin >> sexo;

    cout << fixed << setprecision(2);
    cout << "Nome 1: " << nome1 << endl; // sempre tem de usar o atribuidor para colocar a variavel no texto de saida, e o endl para quebra de linha.
    cout << "Salario 1: " << salario1 << endl;
    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl; 


    return 0;
}
// QUando usar o comando cin.ignore(INT_MAX, '\n'); {QUANDO USAR: quando você for ler um texto até a quebra de linha (getline),
//mas antes o seu programa já leu algum outro dado e deixou uma quebra de linha pendente. Por exemplo:
//cout << "Digite sua idade: ";
// cin >> idade;
 //cout << "Digite seu nome completo: ";
 //cin.ignore(INT_MAX, '\n'); // ------------- limpeza de buffer
 //getline(cin, nome);}
