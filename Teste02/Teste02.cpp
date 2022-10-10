#include <iostream>

int main()

{
    int var = 10;
    int& varRef = var;
    int* varPtr = &var;
    varRef = varRef * 2;
    std::cout << "var multiplied by 2 is " << var << std::endl;
    *varPtr = *varPtr / 2;
    std::cout << "var divided by 2 is " << var << std::endl;
}
