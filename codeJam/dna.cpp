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
    cin >> n;                           
    for(int dna=1 ; dna<=3 ; dna++){
        for(int i=1 ; i<=n ; i++){          
            for(int j=1 ; j<=n ; j++){      
                if(i==j || j==n-i+1)        
                    cout << "*";            
                else
                    cout << " ";
            }
            cout<<endl;                     
        }
    }
}