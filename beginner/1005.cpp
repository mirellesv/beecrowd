#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float grade1, grade2, average;

    cin >> grade1;
    cin >> grade2;

    average = ((grade1 * 3.5) + (grade2 * 7.5)) / 11;

    cout << "MEDIA = " << fixed << setprecision(5) << average << endl;
    return 0;
}
