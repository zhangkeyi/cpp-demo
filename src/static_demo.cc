#include <iostream>
using namespace std;


void demo ()
{
    static int count = 0;
    std::cout << count << std::endl;
    count ++;
}

int main ()
{
    for (int i=0;i<5;i++) 
    {
        demo();
    }
    return 0;
}