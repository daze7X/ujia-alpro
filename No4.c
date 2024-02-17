#include <stdio.h>

int main() {
  int n;
  printf("Masukkan jumlah data: ");
  scanf("%d", &n);

  // Deklarasi array untuk menyimpan data
  int data[n];

  // Input data dari user
  for (int i = 0; i < n; i++) {
    printf("Masukkan data ke-%d: ", i + 1);
    scanf("%d", &data[i]);
  }

  // Menghitung jumlah data
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += data[i];
  }

  // Menghitung rata-rata data
  float ratarata = (float)sum / n;

  // Mencari nilai tengah data
  int median;
  if (n % 2 == 0) {
    // Jika jumlah data genap
    median = (data[n / 2 - 1] + data[n / 2]) / 2;
  } else {
    // Jika jumlah data ganjil
    median = data[n / 2];
  }

  // Menampilkan hasil
  printf("Jumlah data: %d\n", n);
  printf("Rata-rata: %.2f\n", ratarata);
  printf("Nilai tengah: %d\n", median);

  return 0;
}
