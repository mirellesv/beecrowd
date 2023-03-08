#include <iostream>

using namespace std;

int main(){
    int i, value, quant_bkn[7], rem;

    int bkn[7] = {100, 50, 20, 10, 5, 2, 1};

    cin >> value;

    rem = value;

    for(i = 0; i < 7; i++){
        quant_bkn[i] = rem/bkn[i];
        rem = rem%bkn[i];
    }

    cout << value << endl;

    for(i = 0; i < 7; i++){
        cout << quant_bkn[i] << " nota(s) de R$ " << bkn[i] << ",00" << endl;
    }
    return 0;
}
