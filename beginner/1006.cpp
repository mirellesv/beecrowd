#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double gradeA, gradeB, gradeC, average;

    cin >> gradeA;
    cin >> gradeB;
    cin >> gradeC;

    average = ((gradeA * 2) + (gradeB * 3) + (gradeC * 5)) / 10;

    cout << "MEDIA = " << fixed << setprecision(1) << average << endl;
    return 0;
}
