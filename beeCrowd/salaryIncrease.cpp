#include <bits/stdc++.h>

using namespace std;

int main () {
    float salary, reAdjustmentRate, newSalary;

    cin >> salary;

    if (salary >= 0.00 && salary <= 400.00) {
        reAdjustmentRate = 15.00 / 100;
        newSalary = salary * reAdjustmentRate;

        salary = salary + newSalary;

        cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary << endl;
        cout << "Em percentual: " << "15 %" << endl;
    }

    else if (salary >= 400.01 && salary <= 800.00) {
        reAdjustmentRate = 12.00 / 100;
        newSalary = salary * reAdjustmentRate;

        salary = salary + newSalary;

       cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary << endl;
        cout << "Em percentual: " << "12 %" << endl;
    }

    else if (salary >= 800.01 && salary <= 1200.00) {
        reAdjustmentRate = 10.00 / 100;
        newSalary = salary * reAdjustmentRate;

        salary = salary + newSalary;

        cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary << endl;
        cout << "Em percentual: " << "10 %" << endl;
    }

    else if (salary >= 1200.01 && salary <= 2000.00) {
        reAdjustmentRate = 7.00 / 100;
        newSalary = salary * reAdjustmentRate;

        salary = salary + newSalary;

        cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary << endl;
        cout << "Em percentual: " << "7 %" << endl;
    }

    else if (salary > 2000.00) {
        reAdjustmentRate = 4.00 / 100;
        newSalary = salary * reAdjustmentRate;

        salary = salary + newSalary;

        cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << newSalary << endl;
        cout << "Em percentual: " << "4 %" << endl;
    }

    return 0;
}
