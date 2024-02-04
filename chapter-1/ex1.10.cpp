#include <iostream>

int main()
{
    int n1 = 10, n2 = 0;

    while (n1 >= n2) {
        std::cout << n1 << std::endl;
        --n1;
    }

    return 0;
}