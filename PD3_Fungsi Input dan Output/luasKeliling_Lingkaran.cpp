#include <stdio.h>
#define Phi 3.14159
main()
{
    float diameter,kel;
    printf("=== MENGHITUNG LUAS DAN KELILING LINGKARAN ===\n");
    printf("Masukkan diameter lingkaran : ");
    scanf("%f",&diameter);
    printf("Data Lingkaran : \n");
    printf("Diameter = %.2f \n",diameter);
    kel = Phi * diameter;
    printf("Keliling = %.2f \n",kel);
    printf("Lingkaran dengan diameter %.2f ,KELILINGNYA adalah %.2f",diameter,kel);
}
