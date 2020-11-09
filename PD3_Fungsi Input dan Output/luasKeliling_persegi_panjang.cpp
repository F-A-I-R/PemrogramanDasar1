#include <stdio.h>

main()
{
    int panjang,lebar,kel,luas;
    printf("=== MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG ===\n");
    printf("Masukkan panjang : ");
    scanf("%i",&panjang);
    printf("Masukkan lebar   : ");
    scanf("%i",&lebar);
    kel  = 2*(panjang+lebar);
    luas = panjang*lebar;
    printf("Keliling = 2(%i + %i) = %i\n",panjang,lebar,kel);
    printf("Luas     = %i * %i    = %i \n",panjang,lebar,luas);
    printf("Luas     = %i * %i    = %i ",panjang,lebar,luas);
}
