#include <iostream>
using namespace std;
int main(){
    int n;
    /*  Nama    : Bagas Ahmad Sadewa
        Nim     : 20051204016
        Kelas   : TIB 20
    */
    cout<<"===============================\n";
    cout<<"-----    Pola Segitiga    -----\n";
    cout<<"===============================\n\n";
    cout<<"Masukkan tinggi segitiga: ";
    cin>>n;                             //Input tinggi segitiga dari user

    for(int i=1 ; i<=n ; i++){          //for membentuk pola atas 1,2,3,4,5
        for(int j=1 ; j<=i ; j++){      //for mencetak * sesuai iterasi i
            cout<<"* ";
        }
        cout<<endl;                     //endl setelah mencetak iterasi i
    }

    for(int i=n ; i>=1 ; i--){          //for membentuk pola bawah 5,4,3,2,1
        for(int j=1 ; j<=i ; j++){      //for mencetak * sesuai iterasi i
            cout<<"* ";
        }
        cout<<endl;                     //endl setelah mencetak iterasi i
    }
}