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

  // Insertion: Insert a new value at a specified position
  int newValue, position;
  cout << "Enter a new integer value to insert: ";
  cin >> newValue;
  cout << "Enter the position (0 to " << n << ") to insert the new value: ";
  cin >> position;

  if (position < 0 || position > n || n >= CAPACITY) {
    cout << "Invalid position or array is full. Cannot insert." << endl;
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
  cout << "Updated array after insertion:\n";
  for (int i = 0; i < n; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}
