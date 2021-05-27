#include <string>
class moive_t
{
    /* data */
private:
    const char * _title;
    int _year;
public:
    moive_t(const char * title, int year);
    ~moive_t();
    void print();
};
