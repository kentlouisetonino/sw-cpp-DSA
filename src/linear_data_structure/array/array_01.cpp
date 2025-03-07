#include <iostream>
#include <array>

void array_01(void) {
  // Uses aggregate initialization.
  std::array<int, 5> arrayInt = { 1, 2, 3, 4, 5 };

  // Calculate the size of array.
  int n = sizeof(arrayInt) / sizeof(arrayInt[0]);

  // Output the values.
  for (auto i : arrayInt) {
    std::cout << i << " ";
  }
}
