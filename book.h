#ifndef BOOK_H
#define BOOK_H
#include <string>
// Class definition for a Panda
class Book
{
    public:
    Book();
    Book(std::string title, std::string author);
    std::string title;
    std::string author;
    int pages;
    int chapters;
};
#endif //PANDA_H