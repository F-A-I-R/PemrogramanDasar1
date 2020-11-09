#include <stdio.h>
#define Phi 3.14159
main()
{
    float diameter,kel;
    printf("=== MENGHITUNG LUAS DAN KELILING LINGKARAN ===\n");
    printf("Masukkan diameter lingkaran : ");
    scanf("%f",&diameter);
    printf("Data Lingkaran : \n");
    printf("Diameter = %f \n",diameter);
    kel = Phi * diameter;
    printf("Keliling = %f \n",kel);
    printf("Lingkaran dengan diameter %f ,KELILINGNYA adalah %f",diameter,kel);
}
