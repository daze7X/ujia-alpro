#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int x) {
  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;  // Prevent potential overflow

    if (arr[mid] == x) {
      return mid;  // Element found at index mid
    } else if (arr[mid] < x) {
      low = mid + 1;  // Search in the right half
    } else {
      high = mid - 1;  // Search in the left half
    }
  }

  return -1;  // Element not found
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};  // Sorted array
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;  // Element to search

  int result = binarySearch(arr, n, x);

  if (result == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index " << result << endl;
  }

  return 0;
}
