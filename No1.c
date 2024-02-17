#include <stdio.h>

void findThreeLargest(int arr[], int n) {
    int first = arr[0];      // Elemen terbesar pertama
    int second = arr[0];     // Elemen terbesar kedua
    int third = arr[0];      // Elemen terbesar ketiga

    // Mencari 3 elemen terbesar
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    // Menampilkan 3 elemen terbesar
    printf("Tiga elemen terbesar dalam array adalah: %d, %d, %d\n", first, second, third);
}

int main() {
    int n;

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Masukkan elemen-elemen array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findThreeLargest(arr, n);

    return 0;
}