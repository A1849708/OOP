#include <iostream>

using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(void){
    int array[4][4]={{-3,2,3,4},
                     {1,3,3,4},
                     {1,2,-2,4},
                     {1,2,3,3}};
    cout<<sum_diagonal(array)<<endl;
    return 0;
}