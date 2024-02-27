#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 12.345, b = 12345.6789, c = 123.456;
    cout << fixed << right << setprecision(2);
    cout << "向右靠齊" << endl;
    cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;
    cout << setw(10) << b << setw(10) << c << setw(10) << a << endl;
    cout << setw(10) << c << setw(10) << a << setw(10) << b << endl;
    cout << endl;
    cout << left << setprecision(1);
    cout << "向左靠齊" << endl;
    cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;
    cout << setw(10) << b << setw(10) << c << setw(10) << a << endl;
    cout << setw(10) << c << setw(10) << a << setw(10) << b << endl;

    return 0;
}