

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num;

    cout << "Insert a number: " << endl;
    cin >> num;
    cout << "1 is even" << endl;
    cout << "2 is odd" << endl;
    if (num % 2 == 0)
        cout << "Result: 1 (even)" << endl;
    else
        cout << "Result: 2 (odd)" << endl;
    return 0;
}
