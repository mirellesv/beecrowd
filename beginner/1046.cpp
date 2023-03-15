/*
Read the start time and end time of a game, in hours. Then calculate the
duration of the game, knowing that the game can begin in a day and finish
in another day, with a maximum duration of 24 hours. The message must be
printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED
X HOUR(S)”

Input:
Two integer numbers representing the start and end time of a game.

Output:
Print the duration of the game as in the sample output.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int start, end, duration;

    cin >> start >> end;

    if(end < start){
        duration = (24 - start) + end;
    }else if(end > start){
        duration = end - start;
    }else{
        duration = 24;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
    return 0;
}
