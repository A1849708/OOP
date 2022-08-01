#include <iostream>
#include <string>

using namespace std;

extern void print_binary_str(string decimal_number);

int main (void){

    string decimal_number="547385";
    print_binary_str(decimal_number);
    return 0;
}