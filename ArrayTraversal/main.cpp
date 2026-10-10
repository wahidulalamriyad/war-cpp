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

  // Traversal: Calculate total sum, maximum value, and minimum value
  int total = 0, maxVal = numbers[0], minVal = numbers[0];
  for (int i = 0; i < n; i++) {
    total += numbers[i];
    if (numbers[i] > maxVal) maxVal = numbers[i];
    if (numbers[i] < minVal) minVal = numbers[i];
  }

  cout << "Sum: " << total << " | Average: " << (double)total / n << endl;
  cout << "Highest: " << maxVal << " | Lowest: " << minVal << endl;
  return 0;
}
