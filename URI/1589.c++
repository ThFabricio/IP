#include <iostream>

using namespace std;

int main()
{
    int testes, r1, r2, r3;
    cin >> testes;

    for(int i=0; i < testes; i++){

        cin >> r1 >> r2;
        r3 = r1 + r2;
        cout << r3 << endl;

    }

    return 0;
}