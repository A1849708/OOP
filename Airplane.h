#include "Person.h"
#include <string>
#ifndef AIRPLANE_H
#define AIRPLANE_H
    class Airplane: public Person{
        private:
            Person one;
            Person two;
            string flightName;
        public:
            Airplane();
            Airplane(string callsign, Person thePilot, Person theCoPilot);
            void setPilot(Person thePilot);     
            Person getPilot();
            void setCoPilot(Person theCoPilot); 
            Person getCoPilot();
            void printDetails(); 
            void setFlight(string flightName);
            string getFlight();
};
#endif 