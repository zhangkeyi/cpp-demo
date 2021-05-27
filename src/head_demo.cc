#include "head_demo.h"

#include <iostream>
using namespace std;

moive_t::moive_t (const char * title, int year) 
{
    // 为啥这个一定得this指针
    this -> title = title;
    this -> year = year;
}

moive_t::~moive_t () 
{
}

void moive_t::print ()
{
    // 为啥 title[0] 取不到数
    cout << "title:" << this -> title[0] << ", year:" << this -> year;        
}


int main () 
{

    const char * title = "any";
    moive_t moive (title, 2021);

    moive_t * p = &moive;

    p -> print();
    moive.print();

    return 0;
}


