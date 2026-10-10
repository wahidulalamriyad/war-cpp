#include <iostream>

int main() {
  const int CAPACITY = 50;
  int numbers[CAPACITY];
  int n;

  std::cout << "Enter number of elements to store (up to 50): ";
  std::cin >> n;

  std::cout << "Enter " << n << " integer values:\n";
  for (int i = 0; i < n; i++) {
    std::cin >> numbers[i];
  }

  // Linear Search: Find a specific value in the array
  int searchValue;
  std::cout << "Enter the value to search for: ";
  std::cin >> searchValue;

  bool found = false;
  for (int i = 0; i < n; i++) {
    if (numbers[i] == searchValue) {
      std::cout << "Value " << searchValue << " found at index " << i
                << std::endl;
      found = true;
      break;
    }
  }

  if (!found) {
    std::cout << "Value " << searchValue << " not found in the array."
              << std::endl;
  }

  return 0;
}
