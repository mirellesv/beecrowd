#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    double salary, total_sales, amount_received;

    cin >> name;
    cin >> salary;
    cin >> total_sales;

    amount_received = (0.15 * total_sales) + salary;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << amount_received << endl;
    return 0;
}
