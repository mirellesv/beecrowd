/*
 The company ABC decided to give a salary increase to its employees,
 according to the following table:

 Salary 	          Readjustment Rate

0 - 400.00                   15%
400.01 - 800.00              12%
800.01 - 1200.00             10%
1200.01 - 2000.00             7%
Above 2000.00                 4%

Read the employee's salary, calculate and print the
new employee's salary, as well the money earned and
the increase percentual obtained by the employee, with
corresponding messages in Portuguese, as the below
example.

Input:

The input contains only a floating-point number, with
2 digits after the decimal point.

Output:

Print 3 messages followed by the corresponding numbers
informing the new salary, the among of money earned
(both must be shown with 2 decimal places) and the
percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float salary, new_salary, percentage;

    cin >> salary;

    if(salary <= 400.00){
        percentage = 15;
        new_salary = salary * 1.15;
    }else if(salary <= 800.00){
        percentage = 12;
        new_salary = salary * 1.12;
    }else if(salary <= 1200.00){
        percentage = 10;
        new_salary = salary * 1.10;
    }else if(salary <= 2000.00){
        percentage = 7;
        new_salary = salary * 1.07;
    }else{
        percentage = 4;
        new_salary = salary * 1.04;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
    cout << "Reajuste ganho: " << new_salary - salary << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << percentage << " %" << endl;
    return 0;
}
