#include <stdio.h>

main()
{
    int panjang,lebar,kel,luas;
    printf("=== MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG ===\n");
    printf("Masukkan panjang : ");
    scanf("%d",&panjang);
    printf("Masukkan lebar   : ");
    scanf("%d",&lebar);
    kel  = 2*(panjang+lebar);
    luas = panjang*lebar;
    printf("Keliling = 2(%d + %d) = %d \n",panjang,lebar,kel);
    printf("Luas     = %d * %d    = %d ",panjang,lebar,luas);
}
