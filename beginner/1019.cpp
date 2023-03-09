#include <iostream>

using namespace std;

int main(){
    int time, min, sec, hrs;

    cin >> time;

    min = time/60;
    sec = time%60;
    hrs = min/60;
    min = min%60;

    cout << hrs << ":" << min << ":" << sec << endl;
    return 0;
}
