
// Aula FAESA Técnicas de programação C++

#include <iostream>

// evita repetição de std::
using std::cout;
using std::cin;
using std::endl;

/*int main()
{
    std::cout << "Feurrado is a cool dev!\n"; 
}
*/

int main()
{
    cout << "Insert three numbers: " << endl;
    int v1 = 0, v2 = 0, v3 = 0;
    cin >> v1 >> v2 >> v3;
    cout << "The sum of " << v1 << " , " << v2 << " and " << v3
        << " is " << v1 + v2 + v3 << endl;
    cout << "The multiplication of " << v1 << " , " << v2 << " and " << v3
        << " is " << v1 * v2 * v3 << endl;
    return 0;
}