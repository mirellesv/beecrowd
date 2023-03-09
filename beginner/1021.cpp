#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double money, bkn_c[12] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int i, quant_bknc[12];

    cin >> money;

    for(i = 0; i < 12; i++){
        quant_bknc[i] = money/bkn_c[i];
        money = fmod(money, bkn_c[i]); // fmod returns the floating-point remainder of the division
    }

    cout << "NOTAS:" << endl;
    for(i = 0; i < 6; i++){
        cout << quant_bknc[i] << " nota(s) de R$ " << fixed << setprecision(2) << bkn_c[i] << endl;
    }
    cout << "MOEDAS:" << endl;
    for(i = 6; i < 12; i++){
        cout << quant_bknc[i] << " moeda(s) de R$ " << bkn_c[i] << endl;
    }
    return 0;
}
