/*
1041 - Coordinates of a Point

Write an algorithm that reads two floating values (x and y), which should represent
the coordinates of a point in a plane. Next, determine which quadrant the point
belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).

If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input:
The input contains the coordinates of a point.

Output:
The output should display the quadrant in which the point is.

*/

#include <iostream>

using namespace std;

int main(){
    float X, Y;

    cin >> X >> Y;

    /*
    Q1: x > 0, y > 0
    Q2: x < 0, y > 0
    Q3: x > 0, y < 0
    Q4: x < 0, y < 0
    Eixo x: x = 0, y != 0
    Eixo y: x != 0, y = 0
    Origem: x = 0, y = 0
    */

    if(X == 0.0 || Y == 0.0){
        if(X == 0.0 && Y == 0.0){
            cout << "Origem" << endl;
        }else if(X == 0.0){
            cout << "Eixo Y" << endl;
        }else{
            cout << "Eixo X" << endl;
        }
    }else{
        if(X > 0.0){
            if(Y > 0.0){
                cout << "Q1" << endl;
            }else{
                cout << "Q4" << endl;
            }
        }else{
            if(Y > 0.0){
                cout << "Q2" << endl;
            }else{
                cout << "Q3" << endl;
            }
        }
    }
    return 0;
}
