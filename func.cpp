#include <iostream>
extern "C" {
    #include "header.h"
}

void func()
{
    std::cout << "Hello from C++ land!" << std::endl;
}