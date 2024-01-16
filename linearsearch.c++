#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;  // Element found at index i
    }
  }
  return -1;  // Element not found
}

int main() {
  int arr[] = {10, 5, 2, 4, 7, 9, 8, 6, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 7;  // Element to search

  int result = linearSearch(arr, n, x);

  if (result == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index " << result << endl;
  }

  return 0;
}
