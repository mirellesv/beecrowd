#include <iostream>

using namespace std;

int main(){
    int value, hund, fift, twt, ten, fiv, two, one, rem;

    cin >> value;

    rem = 0;

    hund = value/100;
    rem = value%100;
    fift = rem/50;
    rem = rem%50;
    twt = rem/20;
    rem = rem%20;
    ten = rem/10;
    rem = rem%10;
    fiv = rem/5;
    rem = rem%5;
    two = rem/2;
    rem = rem%2;
    one = rem/1;

    cout << value << endl;
    cout << hund << " nota(s) de R$ 100,00" << endl;
    cout << fift << " nota(s) de R$ 50,00" << endl;
    cout << twt << " nota(s) de R$ 20,00" << endl;
    cout << ten << " nota(s) de R$ 10,00" << endl;
    cout << fiv << " nota(s) de R$ 5,00" << endl;
    cout << two << " nota(s) de R$ 2,00" << endl;
    cout << one << " nota(s) de R$ 1,00" << endl;
    return 0;
}
