#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cod1, units1, cod2, units2;
    double price1, price2, amount_to_pay;

    cin >> cod1 >> units1 >> price1;
    cin >> cod2 >> units2 >> price2;

    amount_to_pay = (units1 * price1) + (units2 * price2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << amount_to_pay << endl;
    return 0;
}
