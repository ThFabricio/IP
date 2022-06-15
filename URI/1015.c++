#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, y1, x2, y2, distancia;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    distancia = sqrt(pow((x2 -x1), 2) + pow((y2 - y1), 2));
    cout << fixed;
    cout.precision(4);
    cout << distancia << "\n";



    return 0;
}