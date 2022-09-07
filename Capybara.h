#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>

using namespace std;

class Capybara {
    private:
        string capyName; 
        int capyAge;
    public:
        Capybara(); 
        void setName(string nName);
        void setAge(int nAge);    
        string getName();   
        int getAge();
};
#endif 