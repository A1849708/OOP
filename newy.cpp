#include <iostream>
#include <string>
#include "Musician.h"
#include "Orchestra.h"
using namespace std;

int main(){
    // Initialise musicians.
    Musician m1("Trumpet", 5);
    Musician m2("Alto Saxaphone", 4);
    Musician m3("Drums", 4);
    Musician m4("Bass Guitar", 3);
    Musician m5("Trombone", 2);
    Musician m6("Violin", 7);

    // Define orchestra.
    Orchestra orchestra(6);
    cout << "Number of current members: " << orchestra.get_current_number_of_members() << endl;

    // Add members.
    orchestra.add_musician(m1); orchestra.add_musician(m2); orchestra.add_musician(m3); 
    orchestra.add_musician(m4); orchestra.add_musician(m5); orchestra.add_musician(m6); 

    cout << "Number of current members: " << orchestra.get_current_number_of_members() << endl;

    // Check instruments.
    string trumpet = "Trumpet";
    string drums = "Drums";
    string flute = "Flute";

    if (orchestra.has_instrument(trumpet) == true){
        cout << "The orchestra has a " << trumpet << endl;
    } else {
        cout << "The orchestra does not have a " << trumpet << endl;
    }

    if (orchestra.has_instrument(drums) == true){
        cout << "The orchestra has a " << drums << endl;
    } else {
        cout << "The orchestra does not have a " << drums << endl;
    }

    if (orchestra.has_instrument(flute) == true){
        cout << "The orchestra has a " << flute << endl;
    } else {
        cout << "The orchestra does not have a " << flute << endl;
    }

    // Checking if orchestra is full.
    Musician m7("Flute", 1);
    if (orchestra.add_musician(m7) == true){
        cout << "Successfully added member\n";
    } else {
        cout << "Orchestra is full! Could not add member\n";
    }

    // Delete.
    orchestra.~Orchestra();

    return 0;
}