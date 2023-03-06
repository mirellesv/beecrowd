#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double radius, volume, pi;

    cin >> radius;
    pi = 3.14159;

    volume = (4.0)/3 * pi * pow(radius, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    return 0;
}
