#include <stdio.h>

int main() {

    //1
    char kar;
    puts("Menampilkan karakter yang diketikan (Enter untuk berhenti)\n");
    printf("Masukkan sembarang karakter: ");

    while (1) {
        kar=getchar();
        if (kar =='\n');
        break;
    }
    printf("Program telah berhenti karena anda menekan tombol enter");


    //2
    int i, bil=0;
    puts("Menampilkan bilangan ganjil selain kelipatan 3\n");
    printf("Masukkan bilangan: ");
    scanf("%d", bil);
    printf("\n Bilangan ganjil yang kurang dari %d = \n", bil);

    for (i= 1; i<=bil; i+=2) {
        if (i%3 == 0)
            continue;
        printf("%d", i);
    }
    return 0;
}
