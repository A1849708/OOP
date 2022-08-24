#include <iostream>

using namespace std;


int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int min=**vals;
    int max=**vals;
    for (int i=0;i<num_rows;i++){
        for (int j=0;j<num_cols;j++){
            if (*(*(vals+i)+j)>max){
                max=*(*(vals+i)+j);
            }
            else if (min>*(*(vals+i)+j)){
                min=*(*(vals+i)+j);
            }
        }
    }
    int array[2]={min,max};
    int* ptr=array;
    return ptr;
}