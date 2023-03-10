#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, soma_c_d, soma_a_b;

    cin >> a >> b >> c >> d;

    soma_c_d = c + d;
    soma_a_b = a + b;

    if((b > c && d > a) && (soma_c_d > soma_a_b) && (c > 0 && d > 0) && (a % 2 == 0)){
        cout << "Valores aceitos" << endl;
    }else{
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}
