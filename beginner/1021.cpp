/* BANKNOTES AND COINS

Read a value of floating point with two decimal places. This represents a monetary value.
After this, calculate the smallest possible number of notes and coins on which the value
can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins
are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list
of notes and the message “MOEDAS:” followed by the list of coins.

Input:
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).
Output:
Print the minimum quantity of banknotes and coins necessary to change the initial value,
as the given example.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double amount;
    int i, temp, integer, decimal, notes[6] = {100, 50, 20, 10, 5, 2}, coins[6] = {100, 50, 25, 10, 5, 1};

    cout << fixed << setprecision(2);

    cin >> amount;

    // The number 70.34, for example, will be converted into binary so that it will be stored by the computer.
    // In binary, it would be 70.33999999999999999999. To make sure the integer variable won't get 7033, we
    // first multiply what's in the variable amount by 100.

    temp = amount * 100;

    integer = temp/100;
    decimal = temp%100;

    cout << "NOTAS:" << endl;

    for(i = 0; i < 6;i++){ // Decomposing the integer part
        cout << integer/notes[i] << " nota(s) de R$ " << notes[i] << ".00" << endl;
        integer = integer%notes[i];
    }

    decimal += integer*100; // What's left from the integer part after dividing it will be added to the decimal part

    cout << "MOEDAS:" << endl;
    for(i = 0; i < 6;i++){ // Decomposing the decimal part
        cout << decimal/coins[i] << " moeda(s) de R$ " << coins[i]/100.0 << endl;
        decimal = decimal%coins[i];
    }
    return 0;
}
