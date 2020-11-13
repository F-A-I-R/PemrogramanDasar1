#include <iostream>
using namespace std;
int main(){
    /*  Nama    : Bagas Ahmad Sadewa
        Nim     : 20051204016
        Kelas   : TIB 20
    */
    cout << "=========================\n";
    cout << "----      Pola X     ----\n";
    cout << "=========================\n\n";
    cout << "Di soal panjangnya 10 \n";
    int n;
    cout << "Masukkan panjang pola : ";
    cin >> n;                           //input panjang pola n

    for(int i=1 ; i<=n ; i++){          //for pola pembentuk kolom (kebawah)
        for(int j=1 ; j<=n ; j++){      //for pola pembentuk baris (kesamping)
            if(i==j || j==n-i+1)        //if nilai iterasi i = iterasi j atau nilai j = n-iterasi i +1
                cout << "*";            
            else
                cout << " ";
        }
        cout<<endl;                     //endl setelah j looping sebanyak n kali 
    }
    
}