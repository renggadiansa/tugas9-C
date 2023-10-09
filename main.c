#include <stdio.h>

int main() {

    //1
//    char kar;
//    puts("Menampilkan karakter yang diketikan (Enter untuk berhenti)\n");
//    printf("Masukkan sembarang karakter: ");
//
//    while (1) {
//        kar=getchar();
//        if (kar =='\n');
//        break;
//    }
//    printf("Program telah berhenti karena anda menekan tombol enter");


    //2
//   int n , i;
//
//    printf("Masukkan nilai: ");
//    scanf("%d", &n);
//
//    printf("Bilangan ganjil dari 1 - %d (kecuali kelipatan 3): ", n);
//
//    for (i = 1; i <= n; i++) {
//        if (i % 2 == 0) {
//            continue;
//        }
//        if (i % 3 == 0) {
//            continue;
//        }
//
//        printf("%d ", i);
//    }

    //3
//    int n , i;
//    printf("Masukkan nilai: ");
//    scanf("%d", &n);
//
//    printf("Hasil ", &n);
//
//    for (i = 1; i <= n; i+=2) {
//        if (i > 100) {
//            break;
//        }
//        if (i % 7 == 0 || i%11==0) {
//            continue;
//        }
//        printf("%d ", i);
//    }

    //4
//    int n = 0 , i;
//
//    printf("Masukkan jumlah data: ");
//    scanf("%d", &n);
//
//    int nilai, total = 0, minimal, maksimal;
//
//    printf("Masukkan nilai ke-1: ");
//    scanf("%d", &nilai);
//
//    minimal = maksimal = total = nilai;
//
//    for (i = 2; i <= n; ++i) {
//        printf("Masukkan nila ke-%d: ", i);
//        scanf("%d", &nilai);
//
//        if (nilai < minimal) {
//            minimal = nilai;
//        }
//
//        if (nilai > maksimal) {
//            maksimal = nilai;
//        }
//
//        total += nilai;
//    }
//
//    double rata_rata = (double )total / n;
//
//    printf("\nNilai minimal: %d\n", minimal);
//    printf("Nilai maksimal: %d\n", maksimal);
//    printf("Nilai rata-rata: %2.f\n", rata_rata);


    //5
//    int n = 0, i, j;
//
//    printf("Masukkan nilai n: ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; ++i) {
//        for (j = 1; j <= n; ++j) {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }

    //6
//    int n = 0, i, j;
//
//    printf("Masukkan nilai n: ");
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; ++i) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", i);
//        }
//        printf("\n");
//    }

    //7
//    int i, n, row;
//
//    printf("Masukkan nilai: ");
//    scanf(" \n %d", &n);
//    row = n;
//    while ( n > 0 ) {
//
//        for(i = 1; i <= row; i++) {
//            printf(" %d", i);
//        }
//        printf(" \n ");
//        n--;
//    }
//
//    printf("Apakah anda ingin keluar (y/t)? ");
//    while (1) {
//        scanf("%c", &i);
//
//        if (i =='y') {
//            printf("Program berakhir \n");
//            break;
//        }
//    }

    //3
    int n, count = 0, num = 2;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Bilangan prima ke-%d: ", n);

    while (count < n) {
        int i, isPrime = 1;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0 ) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}