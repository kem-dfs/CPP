#include <iostream>

class Person
{
private:
    /* data */
    std::string name;
    int age;
public:

    //default constructor
    Person(/* args */){};

    //parameterized constructor
    //can use : to init data for shorter code
    Person(const std::string &n, const int age) : name(n), age(age){};

    //copy constructor
    Person(const Person &p):name(p.name), age(p.age){}

    //move constructor
    Person(const Person && p) noexcept : name(std::move(p.name)), age(p.age){}


    ~Person(){}

    void print(){}
};




int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
