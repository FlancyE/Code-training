#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pos = 7777;
    cout << "12345678901234567890" << endl;
    cout << pos << endl;
    cout << setw(3) << pos << endl;
    cout << setw(8) << pos << endl;
    cout << setw(8) << right << pos << endl;
    cout << setw(8) << left << pos << "*" << endl << endl;
    cout << setfill('*');
    cout << "12345678901234567890" << endl;
    cout << setw(8) << pos << endl;
    cout << setw(8) << right << pos << endl;
    cout << setw(8) << left << pos << "*" << endl << endl;

    return 0;

}