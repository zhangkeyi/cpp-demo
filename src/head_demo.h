#include <string>
class moive_t
{
    /* data */
private:
    const char * title;
    int year;
public:
    moive_t(const char * title, int year);
    ~moive_t();
    void print();
};
