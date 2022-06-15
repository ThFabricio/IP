#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long r;
    long double volume = 0, pi = 3.14159;

    cin >> r;
    volume = (4.0/3)*pi*pow(r,3);
    cout << fixed;
    cout.precision(3);
    cout << "VOLUME = " << volume << endl;


    return 0;
}