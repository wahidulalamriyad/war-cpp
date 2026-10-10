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

  // Deletion: Delete an element at a specified position
  int position;
  std::cout << "Enter the position (0 to " << n - 1
            << ") of the element to delete: ";
  std::cin >> position;

  if (position < 0 || position >= n) {
    std::cout << "Invalid position. Cannot delete." << std::endl;
    return 1;
  }

  // Shift elements to the left to fill the gap
  for (int i = position; i < n - 1; i++) {
    numbers[i] = numbers[i + 1];
  }

  n--;  // Decrease the count of elements

  // Display the updated array
  std::cout << "Updated array after deletion:\n";
  for (int i = 0; i < n; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
