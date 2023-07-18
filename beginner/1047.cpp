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
    int initial_hour, initial_minute, final_hour, final_minute, hour_difference, minute_difference;

    cin >> initial_hour >> initial_minute >> final_hour >> final_minute;

    if(final_hour > initial_hour){
        if(final_minute > initial_minute){
            hour_difference = final_hour - initial_hour;
            minute_difference = final_minute - initial_minute;
        }else if(final_minute < initial_minute){
            hour_difference = (final_hour - initial_hour) - 1;
            minute_difference = (final_minute + 60) - initial_minute;
        }else{
            hour_difference = final_hour - initial_hour;
            minute_difference = final_minute - initial_minute;
        }
    }else if (final_hour < initial_hour){
        if(final_minute > initial_minute){
            hour_difference = (final_hour + 24) - initial_hour;
            minute_difference = final_minute - initial_minute;
        }else if(final_minute < initial_minute){
            hour_difference = (final_hour + 24) - initial_hour - 1;
            minute_difference = (final_minute + 60) - initial_minute;
        }else{
            hour_difference = (final_hour + 24) - initial_hour;
            minute_difference = final_minute - initial_minute;
        }
    }else{
        if(final_minute > initial_minute){
            hour_difference = 0; // The game cannot be longer than 24 hours
            minute_difference = final_minute - initial_minute;
        }else if(final_minute < initial_minute){
            hour_difference = 23;
            minute_difference = (final_minute + 60) - initial_minute;
        }else if(final_minute == initial_minute){
            hour_difference = 24;
            minute_difference = 0;
        }
    }

    cout << "O JOGO DUROU " << hour_difference << " HORA(S) E " << minute_difference << " MINUTO(S)" << endl;
}
