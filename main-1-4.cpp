#include <iostream>

using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length) ;

int main (){
    double old_array[5]={1,2.54,8,6.52,9};
    double new_array[5];
    copy_doubles(old_array,new_array,5);
    return 0;
}