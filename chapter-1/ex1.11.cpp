#include <iostream>

int main()
{
    int n1 = 0, n2 = 0;

    std::cout << "Entre an integer:" << std::endl;
    std::cin >> n1;

    std::cout << "Entre a bigger integer:" << std::endl;
    std::cin >> n2;

    while (n1 <= n2) {
        std::cout << std::endl << n1;
        ++n1;
    }
    std::cout << std::endl;

    return 0;
}