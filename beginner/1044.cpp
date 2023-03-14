/*

Read two integer values (A and B). After, the program should print
the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos"
(aren’t multiples), corresponding to the read values.

Input:
The input has two integer numbers.


Output:
Print the relative message to the input as stated above.
*/
#include <iostream>

using namespace std;

int main(){
    int A, B;

    cin >> A >> B;

    if(A%B == 0 || B%A == 0){
        cout << "Sao Multiplos" << endl;
    }else{
        cout << "Nao sao Multiplos" << endl;
    }
    return 0;
}
