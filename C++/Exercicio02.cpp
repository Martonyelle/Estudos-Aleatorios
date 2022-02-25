#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int idade1, idade2;
    float media;
    string nome1, nome2;

    cout << "Digite o nome da primeira pessoa: " << endl;
    cin >> nome1;
    cout <<"Agora a idade: " << endl;
    cin >> idade1;
    cout << "Digite o nome da segunda pessoa: " << endl;
    cin >> nome2;
    cout << "Agora a idade da segunda pessoa: " << endl;
    cin >> idade2;

    media = 0;
    media = (float)(idade1 + idade2) / 2;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " é igual a: " << media << endl;

    return 0;
}