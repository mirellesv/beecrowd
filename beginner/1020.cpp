#include <iostream>

using namespace std;

int main(){
    int time, years, months, days, aux;

    cin >> time;

    years = time/365;
    aux = time%365; // aux will be responsible for storing what wans't stored in years
    months = aux/30;
    days = aux%30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
    return 0;
}
