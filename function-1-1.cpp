#include <iostream>

using namespace std;

int size_of_variable_star_t(int x){
    int *t=&x;
    int size =sizeof(t);
    return size;
}

