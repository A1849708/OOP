#include <iostream>

using namespace std;

int next_match_count(int vals[], int length){
    int tracker=vals[0];
    int count=0;
    for (int i=1;i<length;i++){
        if (vals[i]==tracker){
            count++;
        }
        else{
            tracker=vals[i];
        }
    }
    return count;
}