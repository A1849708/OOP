#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{
    private:
        int salary;
        string name;
    public:
        Person();
        Person(int mySalary, string myName); 
        void setName(string myName);         
        string getName();
        void setSalary(int mySalary);        
        int getSalary();

};
#endif