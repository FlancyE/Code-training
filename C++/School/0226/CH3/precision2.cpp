#include <iostream>
#include <iomanip>
using namespace std;

// setprecision 是控制浮點數的總位數
int main()
{
    double i = 123.456, j = 1.23456;
    cout << "i = " << i << ", j = " << j << endl << endl;

    cout << setprecision(5);
    cout << "After setprecision(5)" << endl;
    cout << "i = " << i << ", j = " << j << endl << endl;

    cout << "After fixed and setprecision(1)" << endl;
    cout << fixed << setprecision(1);
    cout << "i = " << i << ", j = " << j << endl << endl;

    return 0;
}