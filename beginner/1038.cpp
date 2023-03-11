/* PROBLEM 1038 - Snack


Using the following table, write a program that reads a code and the amount of an item.
After, print the value to pay. This is a very simple program with the only intention of
practice of selection commands.

Code 1: Cachorro Quente - R$ 4.00
Code 2: X-Salada - R$ 4.50
Code 3: X-Bacon - R$ 5.00
Code 4: Torrada simples - R$ 2.00
Code 5: Refrigerante - R$ 1.50

Input:
The input file contains two integer numbers X and Y. X is the product code and Y is the
quantity of this item according to the above table.

Output:
The output must be a message "Total: R$ " followed by the total value to be paid, with 2
digits after the decimal point.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x, y;
    double price;

    cout << fixed << setprecision(2);

    cin >> x >> y;

    cout << "Total: R$ ";

    if(x == 1){
        price = 4.00;
    }else if(x == 2){
        price = 4.50;
    }else if(x == 3){
        price = 5.00;
    }else if(x == 4){
        price = 2.00;
    }else if(x == 5){
        price = 1.50;
    }

    cout << price*y << endl;
    return 0;
}
