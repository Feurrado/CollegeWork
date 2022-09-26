
// Aula FAESA Técnicas de programação C++

#include <iostream>

// evita repetição de std::
using std cout;
using std cin;
using stf endl;

/*int main()
{
    std::cout << "Feurrado is a cool dev!\n"; 
}
*/

int main()
{
    cout << "Insert two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << "and" << v2
        << "is" << v1 + v2 << endl;
    return 0;
}