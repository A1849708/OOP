#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Airplane.h"

using namespace std;

vector<Person> group;


int main(void)
{
    Person first(1, "Al");
    Person second(2, "Kau");
    Person third(3, "Mat");
    group.push_back(first);
    group.push_back(second);
    group.push_back(third);

    cout << " The group of people are: " << endl;
    for (Person &p : group)
    {
        cout << p.getName() << " has a salary " << p.getSalary() << endl;
    }

    Airplane airplane("flight 370", group[0], group[1]);
    cout << endl<< "flight information" << endl;
    airplane.printDetails();

    // Changing the pilot
    cout << endl<< "pilot changing" << endl;
    airplane.setPilot(group[2]);
    cout << endl<< "flight information" << endl;
    airplane.printDetails();

    // Changing the copilot
    cout << endl<< "co-pilot changing" << endl;
    airplane.setPilot(group[0]);
    cout << endl<< "flight information" << endl;
    airplane.printDetails();

    return 0;
}