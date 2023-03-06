#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, trig, circle, trap, sqr, rect, pi;

    pi = 3.14159;

    cin >> a;
    cin >> b;
    cin >> c;

    trig = (a * c) / 2;
    circle = pi * (c * c);
    trap = 0.5 * (a + b) * c;
    sqr = b * b;
    rect = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << trig << endl;
    cout << "CIRCULO: " << circle << endl;
    cout << "TRAPEZIO: " << trap << endl;
    cout << "QUADRADO: " << sqr << endl;
    cout << "RETANGULO: " << rect << endl;
    return 0;
}
