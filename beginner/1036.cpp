#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, delta, r1, r2;

    /* ax^2 + bx + c = 0
    delta = b^2 - 4ac
    x = (-b +- sqrt(delta))/2a
    */

    cin >> a >> b >> c;

    delta = (b*b) - (4 * a * c);

    if(delta >= 0 && (2*a != 0)){
        r1 = (-b + sqrt(delta)) / (2*a);
        r2 = (-b - sqrt(delta)) / (2*a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }else{
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}
