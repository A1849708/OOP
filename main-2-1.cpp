#include <iostream>
#include <string>

using namespace std;

extern string month_lookup(int month);

int main (){
    cout<<month_lookup(46)<<endl;
    return 0;
}