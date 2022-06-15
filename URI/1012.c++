#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double volume, pi = 3.14159, A, B, C;
    long double triangulo, circulo, trapezio, quadrado, retangulo;

    cin >> A >> B >> C;

    triangulo = (A*C)/2;
    circulo = pi*pow(C,2);
    trapezio = ((A + B) * C) / 2;
    quadrado = pow(B, 2);
    retangulo = A * B;


    cout << fixed;
    cout.precision(3);
    cout << "TRIANGULO: " << triangulo << "\n";
    cout << "CIRCULO: " << circulo << "\n";
    cout << "TRAPEZIO: " << trapezio << "\n";
    cout << "QUADRADO: " << quadrado << "\n";
    cout << "RETANGULO: " << retangulo << "\n";


    return 0;
}