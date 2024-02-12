#include <stdio.h>
#include <string.h>

#define MAX_BARANG 100

// Deklarasi fungsi untuk menyimpan data barang
void tambahBarang(char nama[], int stok, int harga);

// Deklarasi fungsi untuk mencari indeks barang berdasarkan nama barang
int cariIndeksBarang(const char* nama);

// Deklarasi fungsi untuk melakukan pembelian barang
void beliBarang(const char* nama, int jumlah);

// Deklarasi fungsi untuk menampilkan stok barang
void tampilkanStokBarang();

// Deklarasi array untuk menyimpan data barang
char nama_barang[MAX_BARANG][50];
int stok_barang[MAX_BARANG];
int harga_barang[MAX_BARANG];
int jumlah_barang = 0;

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    printf("=== Sistem Manajemen Penjualan ===\n");
    printf("1. Tambah Barang\n");
    printf("2. Beli Barang\n");
    printf("3. Tampilkan Stok Barang\n");
    printf("4. Keluar\n");
    printf("Pilih menu (1-4): ");
}

// Fungsi untuk menyimpan data barang
void tambahBarang(char nama[], int stok, int harga) {
    if (jumlah_barang >= MAX_BARANG) {
        printf("Stok barang sudah mencapai batas maksimum.\n");
        return;
    }

    strcpy(nama_barang[jumlah_barang], nama);
    stok_barang[jumlah_barang] = stok;
    harga_barang[jumlah_barang] = harga;

    jumlah_barang++;
    printf("Barang berhasil ditambahkan.\n");
}

// Fungsi untuk mencari indeks barang berdasarkan nama barang
int cariIndeksBarang(const char* nama) {
    for (int i = 0; i < jumlah_barang; i++) {
        if (strcmp(nama_barang[i], nama) == 0) {
            return i;
        }
    }
    return -1;
}

// Fungsi untuk melakukan pembelian barang
void beliBarang(const char* nama, int jumlah) {
    if (jumlah_barang == 0) {
        printf("Belum ada barang yang ditambahkan.\n");
        return;
    }

    int indeks = cariIndeksBarang(nama);
    if (indeks == -1) {
        printf("Barang tidak ditemukan.\n");
        return;
    }

    if (jumlah > stok_barang[indeks]) {
        printf("Stok barang tidak mencukupi.\n");
        return;
    }

    int total_harga = jumlah * harga_barang[indeks];
    printf("Total harga: %d\n", total_harga);

    stok_barang[indeks] -= jumlah;
    printf("Barang berhasil dibeli.\n");
}

// Fungsi untuk menampilkan stok barang
void tampilkanStokBarang() {
    if (jumlah_barang == 0) {
        printf("Belum ada barang yang ditambahkan.\n");
        return;
    }

    printf("Stok Barang\n");
    for (int i = 0; i < jumlah_barang; i++) {
        printf("Nama Barang: %s\n", nama_barang[i]);
        printf("Stok: %d\n", stok_barang[i]);
        printf("Harga: %d\n\n", harga_barang[i]);
    }
}

int main() {
    int pilihan;
    do {
        tampilkanMenu();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: {
                char nama[50];
                int stok, harga;
                printf("Masukkan nama barang: ");
                scanf("%s", nama);
                printf("Masukkan stok barang: ");
                scanf("%d", &stok);
                printf("Masukkan harga barang: ");
                scanf("%d", &harga);
                tambahBarang(nama, stok, harga);
                break;
            }
            case 2: {
                char nama[50];
                int jumlah;
                printf("Masukkan nama barang yang akan dibeli: ");
                scanf("%s", nama);
                printf("Masukkan jumlah barang yang akan dibeli: ");
                scanf("%d", &jumlah);
                beliBarang(nama, jumlah);
                break;
            }
            case 3:
                tampilkanStokBarang();
                break;
            case 4:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih lagi.\n");
                break;
        }
    } while (pilihan!= 4);

    return 0;
}