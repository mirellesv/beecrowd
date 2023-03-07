#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int distance;
    double spent_fuel, consumption;

    cin >> distance;
    cin >> spent_fuel;

    consumption = distance/spent_fuel;

    cout << fixed << setprecision(3) << consumption << " km/l" << endl;
    return 0;
}
