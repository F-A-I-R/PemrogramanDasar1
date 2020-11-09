#include <stdio.h>

main()
{
    int harga, untung, jumlah_pcs;
    printf("=== Keuntungan 30 persen Atas Barang yang terjual ===\n");
    printf("Harga Barang    : ");
    scanf("%d",&harga);
    printf("Mau beli berapa : ");
    scanf("%d",&jumlah_pcs);
    untung = (harga *30/100)*jumlah_pcs;
    printf("Untung yang didapat dari penjualan %d barang adalah %d",jumlah_pcs,untung);
}
