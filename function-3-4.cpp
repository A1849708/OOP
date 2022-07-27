#include <iostream>

void print_pass_fail(char grade)
{
    switch (grade)
    {
    case 'A':
        std::cout << "pass" << std::endl;
        break;
    case 'B':
        std::cout << "pass" << std::endl;
        break;
    case 'C':
        std::cout << "pass" << std::endl;
        break;
    case 'D':
        std::cout << "fail" << std::endl;
        break;
    case 'F':
        std::cout << "fail" << std::endl;
        break;
    default:
        std::cout << "Nothing" << std::endl;
        break;
    }
}