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

  // Traversal: Calculate total sum, maximum value, and minimum value
  int total = 0, maxVal = numbers[0], minVal = numbers[0];
  for (int i = 0; i < n; i++) {
    total += numbers[i];
    if (numbers[i] > maxVal) maxVal = numbers[i];
    if (numbers[i] < minVal) minVal = numbers[i];
  }

  std::cout << "Sum: " << total << " | Average: " << (double)total / n
            << std::endl;
  std::cout << "Highest: " << maxVal << " | Lowest: " << minVal << std::endl;
  return 0;
}
