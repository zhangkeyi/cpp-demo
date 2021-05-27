#include "head_demo.h"

#include <iostream>
using namespace std;

moive_t::moive_t (const char * title, int year) 
{
    // 形参名如果和成员变量名一样，需要加this->
    _title = title;
    _year = year;
}

moive_t::~moive_t () 
{
}

void moive_t::print ()
{
    // 为啥 title[0] 取不到数
    cout << "title:" << _title[0] << ", year:" << _year;        
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


