#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double principal, rate, interest;
    int days;

    cout << fixed << setprecision(2);

    cout << "Enter loan principal (-1 to end): ";
    cin >> principal;

    while (principal != -1) {
        cout << "Enter interest rate: ";
        cin >> rate;

        cout << "Enter term of the loan in days: ";
        cin >> days;

        interest = principal * rate * days / 365;

        cout << "The interest charge is $" << interest << endl;
        cout << endl;

        cout << "Enter loan principal (-1 to end): ";
        cin >> principal;
    }
	system("pause");
    return 0;
}