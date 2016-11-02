#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

void textAnswere(bool a) {
  if (a) {
    cout << "There is/are element(s) in the array, which are at least that big as your number.";
  }
  else {
    cout << "There is no bigger or equal to your number in the array.";
  }
}

bool hasGreaterOrEven(int* array, int length, int number) {
	for (int i = 0; i < length; i++) {
	  if (array[i] >= number) {
	    return true;
	  }
	}
  return false;
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int arrayLength = sizeof(array)/sizeof(int);
  cout << "gimme a number" << endl;
  //http://www.urbandictionary.com/define.php?term=gimme
  int number;
  cin >> number;
  textAnswere(hasGreaterOrEven(array, arrayLength, number));
  return 0;
}
