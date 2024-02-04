#include <iostream>

int main()
{
    int n1 = 50, n2 = 100, sum = 0;

    while (n1 <= n2) {
        sum += n1;
        ++n1;
    }

    std::cout << sum << std::endl;

    return 0;
}