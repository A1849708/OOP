#include <iostream>

using namespace std;

float size_of_variable_star_arr(int x){
    int *arr=&x;
    int size =sizeof(arr);
    return size;
}