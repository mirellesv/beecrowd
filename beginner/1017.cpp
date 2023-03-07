#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hrs, avg_spd;
    double dist, ltrs;

    cin >> hrs;
    cin >> avg_spd;

    dist = avg_spd * hrs;

    ltrs = dist/12.0;

    cout << fixed << setprecision(3) << ltrs << endl;
    return 0;
}
