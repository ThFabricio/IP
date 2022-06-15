#include <iostream>

using namespace std;

int main()
{
    int v, t, deslocamento;

    while(cin >> v >> t){

        deslocamento = v * (t*2);
        cout << deslocamento << "\n";
    }

    return 0;
}