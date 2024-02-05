#include <iostream>

int main()
{
    // Exercise 1.9
    int n1 = 50, n2 = 100, sum = 0;

    for (int i = n1; i <= n2; ++i)
    {
        sum += i;
    }

    std::cout << "Sum = " << sum;

    std::cout << std::endl;

    // Exercise 1.10
    for (int i = 10; i >= 0; --i)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    // Exercise 1.11
    int n3 = 0, n4 = 0;

    std::cout << "Entre an integer:" << std::endl;
    std::cin >> n3;

    std::cout << "Entre a bigger integer:" << std::endl;
    std::cin >> n4;

    for (int i = n3; i <= n4; ++i)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}