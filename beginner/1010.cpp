#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string line1, line2;
    int code1, units_1, code2, units_2;
    double price_1, price_2, total;

    cin >> line1;
    cin >> line2;

    int pos = 0;

    for(int i = 0; i < line1.length(); i++){
        if(line1.find(" ")){
            code1 =
        }
    }

    total = (units_1 * price_1) + (units_2 * price_2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}
