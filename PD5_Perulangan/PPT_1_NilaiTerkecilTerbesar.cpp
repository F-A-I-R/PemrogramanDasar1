#include <iostream>
using namespace std;
int main(){
    /*Buat program untuk mencari nilai terbesar dari
      sejumlah bilangan yang dimasukkan!*/
    cout<< "=====================================\n";
    cout<< " Mencari Nilai Terbesar dan Terkecil \n";
    cout<< "=====================================\n";
    float bil; 
    int n,i,terbesar,terkecil;
    char hitung_lagi='y';
    
    //jika ingin mengulangi lagi
    while (hitung_lagi=='y'){
    cout<< " Masukkan banyak bilangan : ";
    cin >> n;   
    cout<< endl;

    //looping sesuai banyak bilangan (n)
    for(i=1; i<=n ; i++){
        cout<< " [+] Masukkan bilangan ke-"<< i <<" : ";
        cin >> bil;
        cout<< endl;
        if(i==1){
            terkecil = bil;
            terbesar = bil;   
        }else if(bil<terkecil){
            terkecil = bil;
        }else if(bil>terbesar){
            terbesar = bil;
        }
    }   
    cout<< "Bilangan Terbesar adalah " << terbesar<<endl;
    cout<< "Bilangan Terkecil adalah " << terkecil<<endl;
    cout<<" Ingin Mencari Lagi (y/n)?  ";
    cin >> hitung_lagi;
    cout<<"--------------------------------------\n";
    }
    cout<<" Terimakasih";
}     