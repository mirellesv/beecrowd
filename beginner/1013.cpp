#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, maiorab, maiorabc;

    cin >> a;
    cin >> b;
    cin >> c;

    maiorab = (a + b + abs(a - b))/2;
    maiorabc = (maiorab + c + abs(maiorab - c))/2;

    cout << maiorabc << " eh o maior" << endl;
    return 0;
}
