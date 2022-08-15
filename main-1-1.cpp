#include <iostream>

using namespace std;

extern int size_of_variable_star_t(int x);

int main(){
    int  x=15;
    cout<<size_of_variable_star_t(x)<<endl;
    return 0;
}