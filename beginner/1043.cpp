/*
  Read three point floating values (A, B and C) and verify if is possible
  to make a triangle with them. If it is possible, calculate the perimeter
  of the triangle and print the message:

  Perimetro = XX.X

  If it is not possible, calculate the area of the trapezium which basis A
  and B and C as height, and print the message:

  Area = XX.X

  Input:
  The input file has tree floating point numbers.

  Output:
  Print the result with one digit after the decimal point.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float A, B, C;

    cout << fixed << setprecision(1);

    cin >> A >> B >> C;

    // To make a triangle, the sum of any two sides is greater than
    // the third side

    if((A + B > C) && (B + C > A) && (C + B >A)){
        cout << "Perimetro = " << A+B+C << endl;
    }else{
        cout << "Area = " << ((A + B)/2)*C << endl;
    }

    return 0;
}
