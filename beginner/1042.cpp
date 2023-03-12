#include <iostream>

using namespace std;

int main(){
    int i, biggest_pos, smallest_pos, n[3], biggest, smallest, middle;

    for(i = 0; i < 3; i++){
        cin >> n[i];
    }

    biggest = 0;
    smallest = n[0];

    for(i = 0; i < 3; i++){
        if(n[i] > biggest){
            biggest = n[i];
            biggest_pos = i;
        }
        if(smallest > n[i]){
            smallest = n[i];
            smallest_pos = i;
        }
    }


    for(i = 0; i < 3; i++){
        if(i != smallest_pos && i != biggest_pos){
            middle = n[i];
        }
    }

    cout << smallest << endl;
    cout << middle << endl;
    cout << biggest << endl << endl;

    for(i = 0; i < 3; i++){
        cout << n[i] << endl;
    }
    return 0;
}
