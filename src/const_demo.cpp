// const:
// 常类型是指使用类型修饰符const说明的类型，常类型的变量或对象的值是不能被更新的。
#include <iostream>
using namespace std;

// 防止修改
void fun (const int i)
{
  // error!  i++;
}

int main ()
{
    /* 定义常量 **/
    const int i = 18;
    // error 修改常量  i = 10;
    
    // error 定义时必须初始化
    // const int i, j=10;

    
    /* 指向常量的指针 **/
    const int * ptr = &i;
    cout << *ptr << endl;
    // ptr是一个指向int类型const对象的指针，const定义的是int类型，也就是ptr所指向的对象类型，而不是ptr本身，所以ptr可以不用赋初始值。但是不能通过ptr去修改所指对象的值。 
    // error: * ptr = 10;

    /* 常指针 **/
    int num = 10;
    int * const p1 = &num;
    // 可以通过其他方式改变常指针的值
    int * p2 = &num;
    *p2 = 19;
    cout << *p1 << endl;
    

}