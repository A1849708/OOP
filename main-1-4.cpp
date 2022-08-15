#include <iostream>

using namespace std;

extern int size_of_variable_star_arr(int x);

int main (){
    int x[3]={1,2,3};
    cout<<size_of_variable_star_arr(*x)<<endl;
    return 0;
}