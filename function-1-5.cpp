#include <iostream>

using namespace std;

int size_of_array_arr(int x){
    int *arr=&x;
    int size =sizeof(*arr)*3;
    return size;
}