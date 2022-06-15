#include <iostream>

using namespace std;

int main()
{
    int testes;
    cin >> testes;

    if (testes <= 800)
            cout << 1 << endl;
    else if (testes <= 1400)
            cout << 2 << endl;
    else if (testes <= 2000)
            cout << 3 << endl;


    return 0;
}