
// Aula FAESA Técnicas de programação C++

#include <iostream>

/*int main()
{
    std::cout << "Feurrado is a cool dev!\n"; 
}
*/

#include <iostream>
int main()
{
    unsigned int numero, fatorial = 1, val = 1;
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> numero;
    while (val <= numero)
    {
        fatorial *= val;
        val++;
    }
    std::cout << "Fatorial de " << numero
        << " = " << fatorial << std::endl;
    return 0;
}
