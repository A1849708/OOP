#include <iostream>
#include <string>

using namespace std;

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main(void){

    int nstudents;
    cout<<"enter the number of students you want to write report for: ";
    cin>>nstudents;

    string courses[4];
    cout<<"enter the course name after the arrow"<<endl;

    int report_card[nstudents][4];

    for (int i=0;i<4;i++){
        cout<<"> ";
        cin>>courses[i];
    }

    string students[nstudents];
    cout<<"enter the student name after the arrow"<<endl;

    for (int i=0;i<nstudents;i++){
        cout<<"> ";
        cin>>students[i];
    }

    for (int i=0;i<nstudents;i++){
        for (int j=0;j<4;j++){
            cout<<endl<<"enter "<<students[i]<<"'s grade for subject "<<courses[j]<<": ";
            cin>>report_card[i][j];
        }
        cout<<endl;
        }
    

    print_class(courses, students, report_card, nstudents);
    return 0;
}