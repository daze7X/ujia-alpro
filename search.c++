#include <iostream>

using namespace std;

void searchSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int key = arr[i];

   
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    
    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {10, 5, 2, 4, 7, 9, 8, 6, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "sebelum sorting: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  searchSort(arr, n);

  cout << "sesudah sorting: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
