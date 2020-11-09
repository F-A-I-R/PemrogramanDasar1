#include <iostream>
using namespace std;

int main()
{
    cout << "=======================================\n";
    cout << "=== Mencari Bil Terkecil & Terbesar ===\n";
    cout << "=======================================\n";

    //deklarasi variabel
    int angka1, angka2;

    //input 2 bil dari user
    cout << "Masukkan bilangan pertama : ";
    cin  >> angka1;
    cout << "Masukkan bilangan kedua   : ";
    cin  >> angka2;

    //logika dan output
    if(angka1 > angka2)
        cout << "Bilangan pertama adalah bilangan terbesar yaitu " << angka1<< endl;
    if(angka1 < angka2)
        cout << "Bilangan kedua adalah bilangan terbesar yaitu " << angka2<< endl;
    if(angka1 == angka2)
        cout << "Bilangan pertama sama dengan bilangan kedua yaitu " << angka1<< endl;
}
