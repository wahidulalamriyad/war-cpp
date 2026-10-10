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

  // Deletion: Delete an element at a specified position
  int position;
  cout << "Enter the position (0 to " << n - 1
       << ") of the element to delete: ";
  cin >> position;

  if (position < 0 || position >= n) {
    cout << "Invalid position. Cannot delete." << endl;
    return 1;
  }

  // Shift elements to the left to fill the gap
  for (int i = position; i < n - 1; i++) {
    numbers[i] = numbers[i + 1];
  }

  n--;  // Decrease the count of elements

  // Display the updated array
  cout << "Updated array after deletion:\n";
  for (int i = 0; i < n; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}
