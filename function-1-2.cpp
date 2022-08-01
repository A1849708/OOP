#include <iostream>

int is_identity(int array[10][10]){
    bool identity=true;
    int count1=0;
    int count0;
    int sum=0;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if (i==j){
                if (array[i][j]!=1){
                    return false;
                }
            }
            else{
                if (array[i][j]!=0){
                    return false;
                }
            }
        }
    }

    return identity;
}