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
    double money, notes[6] = {100, 50, 20, 10, 5, 2}, coins[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int i, quant_bknc[12], j, value;

    cin >> money;

    // 70.34: the number will be converted into binary so that it will be stored. In binary, it would
    // be 70.33999999999999999999. To make sure the int function won't get 7033, we first multiply what's
    // in the variable money by 100.

    value = int(round(money*100));

    for(i = 0; i < 6; i++){
        quant_bknc[i] = money/notes[i];
        money = mod(money, notes[i]); // fmod returns the floating-point remainder of the division
    }

    j = 6; // j is an auxiliary variable that's gonna be storing the minimum
           // position of quant_bknc that's available for use
    for(i = 0; i < 6; i++){
        quant_bknc[j] = money/coins[i];
        money = mod(money, coins[i]);
        j++;
    }

    cout << "NOTAS:" << endl;
    for(i = 0; i < 6; i++){
        cout << quant_bknc[i] << " nota(s) de R$ " << fixed << setprecision(2) << notes[i] << endl;
    }
    cout << "MOEDAS:" << endl;
    for(i = 6 ; i < 12; i++){
        cout << quant_bknc[i] << " moeda(s) de R$ " << coins[i] << endl;
    }
    return 0;
}
