#include <iostream>#
#include <string>

using namespace std;

string truncate(float num, int numDigits){
    string output = to_string(num).substr(0, numDigits + 1);

    if(output.find('.') == string::npos || output.back() == '.'){
        output.pop_back();
    }

    return output;
}

int main(){
    double gradeA, gradeB, gradeC, average;
    char str[40];

    cin >> gradeA;
    cin >> gradeB;
    cin >> gradeC;

    average = ((gradeA * 2) + (gradeB * 3) + (gradeC * 6)) / 11;

    cout << "MEDIA = " << truncate(average, 2) << endl;
    return 0;
}
