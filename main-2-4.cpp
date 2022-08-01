#include <iostream>

using namespace std;

extern int sum_min_max(int integers[], int length);

int main (void){
    
    int integers[7]={-91,1,63,2,542,6,43};
    cout<<sum_min_max(integers,7)<<endl;

    return 0;
}