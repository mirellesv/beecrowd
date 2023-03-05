#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num, hours;
    float hourly_rate, salary;

    cin >> num;
    cin >> hours;
    cin >> hourly_rate;

    salary = hourly_rate * hours;

    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$" << fixed << setprecision(2) << salary << endl;
    return 0;
}
