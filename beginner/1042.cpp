/*
  Read three integers and sort them in ascending order. After, print these
  values in ascending order, a blank line and then the values in the sequence
  as they were readed.

  Input:
  The input contains three integer numbers.

  Output:
  Present the output as requested above.
*/

#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, a, b, c, temp;

    cin >> n1 >> n2 >> n3;

    // a,b and c were created just so that we have them in the order that they were
    // input by the user

    a = n1;
    b = n2;
    c = n3;


    // The ideia is to compare the first number with the other two
    // in order to find the smallest. After that, we just compare
    // the second and third to find the biggest

    if(n1 > n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n1 > n3){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if(n2 > n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    cout << n1 << endl
         << n2 << endl
         << n3 << endl << endl;

    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}
