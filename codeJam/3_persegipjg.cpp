#include <iostream>
using namespace std;
int main(){

    /*  Nama    : Bagas Ahmad Sadewa
        Nim     : 20051204016
        Kelas   : TIB 20
    */
    cout << "=====================================\n";
    cout << "-----    Pola Persegi Panjang   -----\n";
    cout << "=====================================\n\n";
    int n;
    cout << "Masukkan panjang : ";
    cin >> n;                               //user input panjang pola n
    cout <<endl;
    for(int i=1 ; i<=n ; i++){              //for membentuk pola persegi n (i=cols)
        for(int j=1 ; j<=n ; j++){          //for membentuk pola persegi n (j=rows)
            if(i==1 || i==n)                //if col pertama / terakhir maka print * sebanyak n kali
                cout << "*";
            else{                           //else col pertama / terakhir
                if(j==1 || j==n)            //if row pertama / terakhir print * sebanyak 1 kali
                    cout << "*";
                else                        //else row pertama / terakhir print spasi 
                    cout << " ";
            }
        }
        cout << endl;                       //endl setiap rows sudah n kali loop         
    }
}