#include <iostream>

__declspec(dllexport) void test_printer()
{
    std::cout << "Hello from test.cpp\n";
}

