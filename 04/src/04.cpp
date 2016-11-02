#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int divisorsCounter() {
  cout << "gimme a number and I'll count how many divisors has it" << endl;
  //http://www.urbandictionary.com/define.php?term=gimme
  int number;
  cin >> number;
  int divNum = 0;
  for (int i = 1; i <= number; i++) {
    if (number%i == 0) {
      divNum++;
    }
  }
  return divNum;
}

int main() {
  cout << divisorsCounter();
  return 0;
}
