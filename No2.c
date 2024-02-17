#include <stdio.h>

// Fungsi binary search
int binarySearch(int arr[], int n, int x, int *steps) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        (*steps)++;
        // Jika nilai di tengah adalah yang dicari
        if (arr[mid] == x)
            return mid;
        // Jika nilai di tengah lebih kecil, cari di sebelah kanan
        if (arr[mid] < x)
            low = mid + 1;
        // Jika nilai di tengah lebih besar, cari di sebelah kiri
        else
            high = mid - 1;
    }
    // Jika nilai tidak ditemukan
    return -1;
}

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan nilai mahasiswa (terurut): \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int target;
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &target);

    int steps = 0;
    int result = binarySearch(arr, n, target, &steps);

    if (result == -1)
        printf("Nilai tidak ditemukan.\n");
    else
        printf("Nilai %d ditemukan pada posisi %d setelah %d langkah.\n", target, result, steps);

    return 0;
}
