/*
Read 3 double numbers (A, B and C) representing the sides of a triangle
and arrange them in decreasing order, so that the side A is the biggest
of the three sides. Next, determine the type of triangle that they can
make, based on the following cases always writing an appropriate message:

- if A >= B + C, write the message: NAO FORMA TRIANGULO
- if A^2 = B^2 + C^2, write the message: TRIANGULO RETANGULO
- if A^2 > B^2 + C^2, write the message: TRIANGULO OBTUSANGULO
- if A^2 < B^2 + C^2, write the message: TRIANGULO ACUTANGULO
- if the three sides are the same size, write the message: TRIANGULO EQUILATERO
- if only two sides are the same and the third one is different, write the
message: TRIANGULO ISOSCELES

Input:
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output:
Print all the classifications of the triangle presented in the input.
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double A, B, C, temp;

    cout << fixed << setprecision(1);

    cin >> A >> B >> C;

    if(B > A){
        temp = A;
        A = B;
        B = temp;
    }

    if(C > A){
        temp = A;
        A = C;
        C = temp;
    }

    if(C > B){
        temp = B;
        B = C;
        C = temp;
    }

    if(A >= B + C){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else if((pow(A, 2)) == (pow(B, 2) + pow(C, 2))){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if((pow(A, 2) > (pow(B, 2) + pow(C,2)))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }else if((pow(A, 2) < (pow(B, 2) + pow(C, 2)))){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if(A == B && B == C){
        cout << "TRIANGULO EQUILATERO" << endl;
    }else if(((A == B) && (B != C)) || ((B == C) && (A != C))){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}
