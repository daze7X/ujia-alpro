#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("masukkan angka : ");
    scanf("%d", &n);

    
    if (n < 0)
        printf("tidak termasuk bilangan faktorial.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial dari %d = %llu", n, fact);
    }

    return 0;
}