/*

Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point,
corresponding to 4 scores obtained by a student. Calculate the average with weights
2, 3, 4 and 1 respectively, for these 4 scores and print the message "Media: "
(Average), followed by the calculated result. If the average was 7.0 or more, print
the message "Aluno aprovado." (Approved Student). If the average was less than 5.0,
print the message: "Aluno reprovado." (Reproved Student). If the average was between
5.0 and 6.9, including these, the program must print the message "Aluno em exame."
(In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score)
followed by the typed score. Recalculate the average (sum the exam score with the
previous calculated average and divide by 2) and print the message “Aluno aprovado.”
(Approved student) in case of average 5.0 or more) or "Aluno reprovado."
(Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved
after the exam) print the message "Media final: " (Final average) followed by the final
average for this student in the last line.

Input:
The input contains four floating point numbers that represent the students' grades.
Output:
Print all the answers with one digit after the decimal point.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float n1, n2, n3, n4, nf;
    double avg1, avg2;

    cout << fixed << setprecision(1);

    cin >> n1 >> n2 >> n3 >> n4;

    avg1 = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4)/10;

    cout << "Media: " << avg1 << endl;

    if(avg1 >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(avg1 < 5.0){
        cout << "Aluno reprovado." << endl;
    }else{
        cout << "Aluno em exame." << endl;
        cin >> nf;
        cout << "Nota do exame: " << nf << endl;
        avg2 = (avg1 + nf)/2;

        if(avg2 >= 5.0){
            cout << "Aluno aprovado." << endl;
        }else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << avg2 << endl;
    }
    return 0;
}
