#include <iostream>

namespace foo 
{
    int value () 
    {
        return 5;
    }
}

// namespace aliasing
namespace newfoo = foo;
namespace bar
{
    const double pi = 3.1416;
    double value () {return 2 * pi;}
}

int main () 
{
    std::cout << foo::value() << std::endl;
    std::cout << newfoo::value() << std::endl;
    std::cout << bar::value() << std::endl;
    std::cout << bar::pi << std::endl;
    return 0;
}