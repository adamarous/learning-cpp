// It goes through the range of -100 to 100 inclusive and a step of 1, and
// sums the step number to the sum variable.

#include <iostream>

int main() {
  int sum = 0;
  for (int i = -100; i <= 100; ++i) {
    sum += i;
  }
  std::cout << "The sum of the numbers from -100 to 100 is " << sum << std::endl;
  return 0;
}