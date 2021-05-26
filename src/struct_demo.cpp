#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
    /* data */
    string title;
    int year;
};

void print_movie (movies_t * pmovie)
{
    cout << "title:" << pmovie -> title << ", year:" << pmovie -> year; 
}


int main () 
{
    movies_t amovie;
    movies_t * pmovie;
    pmovie = &amovie;

    cout << "Entry title:";
    getline(cin, pmovie -> title);
    cout << "Entry year:";

    string mystr;
    getline(cin, mystr);

    (stringstream) mystr >> pmovie -> year;

    print_movie(pmovie);
    return 0;
}
