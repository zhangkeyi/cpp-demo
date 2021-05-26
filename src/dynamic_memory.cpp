#include <iostream>
#include <new>

int main () 
{
    int * p;
    std::cout << "how many numbers would you like to type?";
    int i, n;
    std::cin >> i;

    p = new int[i];
    for (n=0;n<i;n++) 
    {
        std::cout << "entry number:";
        std::cin >> p[n];
    }

    std::cout << "you have entried:";
    for (n=0;n<i;n++)
    {
        std::cout<< p[n] << ",";
    }
    delete[] p;

    return 0;

}