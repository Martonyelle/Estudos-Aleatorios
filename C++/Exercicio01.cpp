#include <iostream>
#include <iomanip> 
#include <string>
#include <cmath> //Essa é a blibioteca de matematica do c++

using namespace std;

int main()
{
    float base, altura, area, perimeto, diagonal;

    cout << fixed << setprecision(4);
    cout << "Digite a Base do triangulo: " << endl;
    cin >> base;
    cout << "Digite a Altura do triangulo: " << endl;
    cin >> altura;
    
    area = 0;
    area = altura * base;

    perimeto = 0;
    perimeto = 2 * (base + altura); 
    
    diagonal = 0;
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimeto << endl;
    cout << "Diagonal = " << diagonal << endl;



    return 0;
}