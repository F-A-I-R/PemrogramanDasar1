#include <iostream>
using namespace std;
int main(){

    /*  Nama    : Bagas Ahmad Sadewa
        Nim     : 20051204016
        Kelas   : TIB 20
    */
    cout << "==============================\n";
    cout << "-----    Pola Persegi    -----\n";
    cout << "==============================\n\n";
    int n;
    cout << "Masukkan panjang sisi: ";
    cin >> n;                           //user menginput panjang sisi 

    for(int i=1 ; i<=n ; i++){          //for membentuk pola persegi n (cols)
        for(int j=1 ; j<=n ; j++){      //for membentuk pola persegi n (rows)
            if(i==1 || i==n)            //if col pertama / terakhir maka * diprint n kali
                cout << "* ";
            else{                       //else col selain pertama/terakhir
                if(j==1 || j==n)        //if row pertama / terakhir maka * diprint sekali
                    cout << "* ";
                else                    //else row pertama / terakhir maka print space "  "
                    cout << "  ";
            }
        }cout << endl;                  //endl tiap 1 row
    }
}