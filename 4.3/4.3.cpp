#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, xp, xk, dX;
    double F, x; 

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dX = "; cin >> dX;
    cout << fixed;

    cout << setw(10) << "X" << setw(20) << "F(X)" << endl;
    cout << "------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x + 10 < 0 && b != 0)
            F = a * x * x - c * x + b;
        else if (x + 10 > 0 && b == 0)
            F = (x - a) / (x - c);
        else
            F = -x / (a - c);
        
        cout << setw(10) << x << setw(20) << F << endl;
        x += dX;
    }
    cout << "---------------------------" << endl;
    return 0;
}