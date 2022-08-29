#include <iostream>
#include <string>
#include "book.h"

using namespace std;

class Book{
    public:
    string title;
    string author;
    int pages;
    int chapters;
};

int main (){

    Book Harry;
    Harry.title="Harry Potter and the Philosopher's Stone";
    Harry.author="J.K. Rowling";
    Harry.pages=320;
    Harry.chapters=8;

    Book Diary;
    Diary.title="Diary of a Wimpy Kid";
    Diary.author="Jeff Kinney";
    Diary.pages=221;
    Diary.chapters=16;

    return 0;
}