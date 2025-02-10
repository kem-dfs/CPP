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

    //prevent compiler from generating default compiler
    Persion() = delete;

    //parameterized constructor
    //can use semicolon (:) to init data for shorter code
    Person(const std::string &n, const int age) : name(n), age(age){};

    //copy constructor
    //must use if class contains pointer.
    //the compiler generates a copy constructor simply copies the pointer, so the new pointer stills points to other's memory allocation
    //
    Person(const Person &p):name(p.name), age(p.age){}
    //prevent object from being copied
    Person(const Persion &p) = delete;

    //move constructor
    //if there is no move constructor, copy constructor will be used instead
    //
    Person(const Person && p) noexcept : name(std::move(p.name)), age(p.age){}


    ~Person(){}

    void print(){}
};

class Student : public Person
{
private:
    int academic_year;
    std::string st_id;

    //composite class
    Person p;
public:

//default constructor
    Student : public Person(/* args */);
    ~Student : public Person();

    //copy constructor
    Student(const Student &st);

    //to prevent from being copied
    Student(const Student& st) = delete;

    //move constructor
    Student(const Student && st){
        this->st_id = std::move(st.st_id);
    }
    //move constructor often goes with assigment operator
    Student & operator=(Student &st);

    //Initialize list
    Student(std::initialize_list<Student> {});


};





int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
