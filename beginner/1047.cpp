/*
Read the start time and end time of a game, in hours and minutes
(initial hour, initial minute, final hour, final minute). Then
print the duration of the game, knowing that the game can begin
in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game
time of 1 minute.

Input:
Four integer numbers representing the start and end time of the game.

Output:
Print the duration of the game in hours and minutes, in this format:
“O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game
lasted XXX hour(s) and YYY minutes.
*/
#include <iostream>

using namespace std;

int main(){
    int initial_hour, initial_min, final_hour, final_min, duration_hour, duration_min;

    cin >> initial_hour >> initial_min
        >> final_hour >> final_min;

    duration_hour = 0;
    duration_min = 0;

    if(!((initial_hour == final_hour) &&(initial_min == final_min))){
        if(final_min > initial_min){
            duration_hour = final_hour - initial_hour;
            duration_min = final_min - initial_min;
        }else{
            duration_min = final_min - initial_min;
        }
    }else{
        duration_hour = 24;
        duration_min = 0;
    }

    cout << "O JOGO DUROU " << duration_hour << " HORA(S) E " << duration_min << " MINUTO(S)" << endl;
    return 0;
}
