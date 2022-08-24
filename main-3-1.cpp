#include <iostream>

using namespace std;

extern int next_match_count(int vals[], int length);

int main (){
    int vals[4]={1,2,2,2};
    cout<<next_match_count(vals,4)<<endl;
    return 0;
}