

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Insert a number: " << endl;
    double v1 = 0;
    cin >> v1;
    double v2 = v1 * 2;
    cout << "value is " << v1 << endl;
    cout << "The double of " << v1
        << " is " << v2 << endl;
    return 0;
}