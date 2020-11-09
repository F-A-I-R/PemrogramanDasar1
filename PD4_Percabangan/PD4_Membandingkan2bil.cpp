#include <stdio.h>

main()
{
    //Tulislah sebuah program yang membandingkan dua bilangan integer yang
    //dimasukan oleh pemakai dan mengeluarkan pesan bilangan mana yang lebih kecil.

    //deklarasi var
    int bil1, bil2;

    //input from user
    printf("Masukkan angka pertama : ");
    scanf("%d",&bil1);
    printf("Masukkan angka kedua   : ");
    scanf("%d",&bil2);

    //output
    if(bil1 < bil2)
        printf("%d lebih kecil dari %d \nBilangan pertama lebih kecil dari bilangan kedua",bil1,bil2 );
    if(bil1 > bil2)
        printf("%d lebih kecil dari %d \nBilangan kedua lebih kecil dari bilangan pertama",bil2,bil1 );
    if(bil1 == bil2)
        printf("%d sama dengan %d \nBilangan pertama dan Bilangan kedua sama", bil1,bil2);


}
