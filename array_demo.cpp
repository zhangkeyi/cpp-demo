#include <iostream>
#include <array>
using namespace std;

void iterator1 ();
void libarr ();

int main ()
{
    iterator1();
    libarr();
    return 0;
}

void iterator1 ()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n, result = 0;
    for (n=0;n<5;n++)
    {
        result += arr[n];
    }
    std::cout << result << endl;
}

void libarr ()
{
    array<int, 3> libarr;
    for (int i=0;i<libarr.size();i++) {
        libarr[i] = i+1;
    }

    int result = 0;
    for (int i=0;i<libarr.size();i++) {
        result += libarr[i];
    }

    std::cout << result << endl;
}