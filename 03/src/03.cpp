#include <iostream>

using namespace std;

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please multiply the total variable by 5 with it.
 */

void multiplying(float* pointer, float multiplier) {
  *pointer = *pointer * multiplier;
}

int main() {
  float total = 123;
  float* totalPointer = &total;
  float multiplier = 5;
  multiplying(totalPointer, multiplier);
  cout << *totalPointer;

  return 0;
}
