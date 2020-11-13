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
    cin >> n;                                    //user input n panjang 
    
    for(int i=1 ; i<=n ; i++){                   //for kolom i
        for(int j=1 ; j<=n ; j++){               //for baris j
            cout << "*";                         //print * sebanyak n kali
        }
        cout << endl;                            //endl setiap baris sudah looping n kali
    }
}