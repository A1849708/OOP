#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{
    private:
        string name;
        int salary;
    public:
        Person();
        Person(int  mySalary, string myName);
        void setName(string myName);    
        void setSalary(int mySalary);    
        string getName();
        int getSalary();
};
#endif