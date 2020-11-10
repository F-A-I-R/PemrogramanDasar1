#include<iostream>
#include<string>
using namespace std;
int main(){
    /*  Nama  = Bagas Ahmad Sadewa
        Nim   = 20051204016
        Kelas = TIB 2020
    */

    cout<<"------------------------------------------\n";
    cout<<"--------      Nilai Mahasiswa     --------\n";
    cout<<"------------------------------------------\n";
    int n;
    cout<<"[+] Jumlah mahasiswa : ";    //input total mhs
    cin>> n;
    string nama[n+1];                 //array nama
    float nilai[n+1];                 //array nilai
    for(int i=1 ; i<=n ; i++){       //looping input nama & nilai
        cout<<endl;
        cout<<"["<<i<<"] Nama depan  : ";
        cin>>nama [i];
        cout<<"[~] Nilai       : ";
        cin>> nilai[i];
        if(nilai[i]>50)             //NILAI LULUS = diatas 50
            cout<< "    Dinyatakan lulus";
        else                        //kurang dari sama dengan 50 = TIDAK LULUS
            cout<< "    Dinyatakan tidak lulus";
        cout<<endl;
    }
    cout<<endl;

    cout<<"----------- DAFTAR NILAI LULUS -----------\n";
    for(int i=1 ; i<=n ; i++){
        if(nilai[i]>50){
            cout<<" Nama  : "<<nama [i]<<endl;
            cout<<" Nilai : "<<nilai[i]<<endl;
            cout<<" Selamat ya "<<nama[i]<<" anda dinyatakan LULUS\n";
            cout<<endl;
        }
    }

    cout<<"-------- DAFTAR NILAI TIDAK LULUS --------\n";
    for(int i=1 ; i<=n ; i++){
        if(nilai[i]<=50){
            cout<<" Nama  : "<<nama [i]<<endl;
            cout<<" Nilai : "<<nilai[i]<<endl;
            cout<<" Tetap semangat ya "<<nama[i]<<" anda dinyatakan TIDAK LULUS\n";
            cout<<endl;

        }
    }

}
