#include <iostream>
#include <cstring>
#include <stdio.h>             

using namespace std;

int main(){
    //deklarasi var text bertipe string
    char text[50];                
    int jml;            
    cout << " ===]   Menghitung Jumlah Karakter   [=== \n";
    cout << "Masukkan teks : ";
    gets(text);   

    //menghitung jml karakter
    jml = strlen(text);
    cout << "Jumlah karakter : " << jml << " karakter" << endl;

    //membalik text
    cout << "-----------------------------------------\n";
    cout << " ===]   Membalik text   [===\n";
    cout << "Sebelum dibalik : " << text << endl;
    cout << "Setelah dibaiik : " << strrev(text);

}