#include<stdio.h>
main()
{
    int pjg,m,cm;
    printf("=== Konversi Ukuran Panjang dalam Cm menjadi M dan kelebihannya dalam Cm ===\n");
    printf("Masukkan panjang dalam Cm : ");
    scanf("%d",&pjg);
    m   = pjg/100;
    cm  = pjg%100;
    printf("hasil konversi adalah %d m %d cm \n",m,cm);

}
