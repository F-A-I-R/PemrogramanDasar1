#include <iostream>
using namespace std;

int main()
/*Buat Program untuk mencari nilai terbesar
dari 3 bilangan yang dimasukkan.*/
{
    int bil1,bil2,bil3;
    cout<< "===[ MENCARI NILAI TERBESAR DARI 3 BILANGAN ]===\n";
    cout<< "Masukkan bilangan pertama : ";
    cin >> bil1;
    cout<< "Masukkan bilangan kedua   : ";
    cin >> bil2;
    cout<< "Masukkan bilangan ketiga  : ";
    cin >> bil3;

    if (bil1 > bil2 && bil1 > bil3){
        cout<< "bilangan ke 1 yaitu " <<bil1<<" paling besar dari bilangan lainnya";
    }else if(bil2 > bil1 && bil2 > bil3){
        cout<< "bilangan ke 2 yaitu " <<bil2<<" paling besar dari bilangan lainnya";
    }else if(bil3 > bil1 && bil3 > bil2){
        cout<< "bilangan ke 3 yaitu " <<bil3<<" paling besar dari bilangan lainnya";
    }else if(bil3 == bil1 && bil3 == bil2){
        cout<< "Ketiga bilangan yang sama";
    }
}
