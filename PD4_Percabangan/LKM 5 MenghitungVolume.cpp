#include <iostream>
#define Phi 3.14
using namespace std;
int main()
{
    float sisi,hasil_kubus, jari,hasil_lingkaran, tinggi,hasil_silinder;
    char  pilihan;
    cout << "==============[LKM 5 PERCABANGAN 2]=============\n\n";

    cout << "================[ PILIHAN MENU ]================\n";
    cout << " 1. MENGHITUNG VOLUME KUBUS \n";
    cout << " 2. MENGHITUNG LUAS LINGKARAN \n";
    cout << " 3. MENGHITUNG VOLUME SILINDER \n";
    cout << "Pilihlah dengan memasukkan angka : ";
    cin  >> pilihan;

    switch (pilihan){
    case '1' :
        cout << "Masukkan sisi kubus : ";
        cin  >> sisi;
        hasil_kubus = sisi * sisi * sisi;
        cout << "Volume Kubus = " << sisi << "x" << sisi << "x" << sisi << '=' <<  hasil_kubus;
        break;
    case '2':
        cout << "Masukkan jari - jari : ";
        cin  >> jari;
        hasil_lingkaran = Phi * jari * jari;
        cout << "Luas Lingkaran = "<< Phi << "x" << jari << "x"<< jari<< "=" << hasil_lingkaran;
        break;
    case '3':
        cout << "Masukkan jari - jari : ";
        cin  >> jari;
        cout << "Masukkan tinggi      : ";
        cin  >> tinggi;
        hasil_silinder = Phi * jari*jari*tinggi;
        cout << "Volume Silinder = "<< Phi << "x" << jari << "x" << jari << "x" << tinggi<< "=" <<hasil_silinder;
        break;
    default :
        cout << "!!Kesalahan dalam memasukkan pilihan menu!!";
    }


    return 0;
}
