#include <iostream>
using namespace std;

int main() {
  const int CAPACITY = 50;
  int numbers[CAPACITY];
  int n;

  cout << "Enter number of elements to store (up to 50): ";
  cin >> n;

  cout << "Enter " << n << " integer values:\n";
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  // Linear Search: Find a specific value in the array
  int searchValue;
  cout << "Enter the value to search for: ";
  cin >> searchValue;

  bool found = false;
  for (int i = 0; i < n; i++) {
    if (numbers[i] == searchValue) {
      cout << "Value " << searchValue << " found at index " << i << endl;
      found = true;
      break;
    }
  }

  if (!found) {
    cout << "Value " << searchValue << " not found in the array." << endl;
  }

  return 0;
}
