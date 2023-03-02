#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double R, pi, A;

    pi = 3.14159;

    cin >> R;

    A = R * R * pi;

    cout << "A=" << fixed << setprecision(4) << A << endl;
    return 0;
}
