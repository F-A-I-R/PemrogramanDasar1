#include<stdio.h>
main()
{
    int pjg,m,cm;
    printf("Masukkan panjang dlm cm: ");
    scanf("%d",&pjg);
    m = pjg/100;
    cm= pjg%100;
    printf("hasil konversi adalah %d m %d cm \n",m,cm);

}
