#include <stdio.h>


int cekPrima(int bilangan) {
    if (bilangan <= 1) {
        return 0; 
    }

    for (int i = 2; i <= bilangan / 2; i++) {
        if (bilangan % i == 0) {
            return 0;  
        }
    }

    return 1;  
}

int main() {
    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (cekPrima(bilangan)) {
        printf("%d adalah bilangan prima.\n", bilangan);
    } else {
        printf("%d bukan bilangan prima.\n", bilangan);
    }

    return 0;
}
