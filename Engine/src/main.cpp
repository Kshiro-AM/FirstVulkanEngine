#include <iostream>

__declspec(dllexport) int out()
{
    std::cout << "hello" << std::endl;
    return 0;
}