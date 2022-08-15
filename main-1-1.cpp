#include <iostream>
#include <string>

using namespace std;

extern void string_2d_copy(string first[][2], string second[][2], int n);

int main (){
    string first[3][2]={{"al","e"},{"ma","th"},{"era","era"}};
    string second[3][2];
    string_2d_copy(first,second,3);
    return 0;
}