#include <iostream>

int main()
{   
    int n1 = "Hello"; // Type error: n1 should be string

    for (int i = n2; i < 100; i++) // Declaration error: n2 is not declared
    {
        std::cout << "Hello, World!" << std::endl;
    }

    for (itn i = 0; i < 100; i++) // Syntax error: itn should be int
    {
        std::cout << "Hello, World!" << std::endl;
    }
}