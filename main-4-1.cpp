#include <iostream>

using namespace std;

extern int* matrix_min_max(int **vals,int num_rows, int num_cols);

int main (){
    int row1[]={10,15,88,22};
    int row2[]={0,5,73,11};
    int row3[]={23,56,15,73};
    int *vals[]={row1,row2,row3};
    int *pointer=matrix_min_max(vals,3,3);
    int val=*pointer;
    int val1=*(pointer+1);

    cout<<"{"<<val<<","<<val1<<"}"<<endl;
    return 0;
}