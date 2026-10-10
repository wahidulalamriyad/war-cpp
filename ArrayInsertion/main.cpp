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

  // Insertion: Insert a new value at a specified position
  int newValue, position;
  std::cout << "Enter a new integer value to insert: ";
  std::cin >> newValue;
  std::cout << "Enter the position (0 to " << n
            << ") to insert the new value: ";
  std::cin >> position;

  if (position < 0 || position > n || n >= CAPACITY) {
    std::cout << "Invalid position or array is full. Cannot insert."
              << std::endl;
    return 1;
  }

  // Shift elements to the right to make space for the new value
  for (int i = n - 1; i >= position; i--) {
    numbers[i + 1] = numbers[i];
  }

  // Insert the new value
  numbers[position] = newValue;
  n++;  // Increase the count of elements

  // Display the updated array
  std::cout << "Updated array after insertion:\n";
  for (int i = 0; i < n; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
