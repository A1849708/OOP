#include <iostream>
#include <string>

using namespace std;

void print_binary_str(string decimal_number){

    int binary= 0;
    int num=stoi(decimal_number);

    int array[32];
    int i=0;
    int j=0;
    int count=0;

    while (num!=0){
        array[i]=num%2;
        i++;
        num=num/2;
    }

    for (int j=i-1;j>=0;j--){
        cout<<array[j];
    }
    cout<<endl;

}