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
    string nama[n];                 //array nama
    float nilai[n];                 //array nilai
    for(int i=0 ; i<n ; i++){       //looping input nama & nilai
        cout<<endl;
        cout<<"[+] Nama depan  : ";
        cin>>nama [i];
        cout<<"[~] Nilai       : ";
        cin>> nilai[i];
        if(nilai[i]>50)             //NILAI LULUS = diatas 50
            cout<< "    Predikat - lulus";
        else                        //kurang dari sama dengan 50 = TIDAK LULUS
            cout<< "    Predikat - tidak lulus";
        cout<<endl;
    }
    cout<<endl;

    cout<<"----------- DAFTAR NILAI LULUS -----------\n";
    for(int i=0 ; i<n ; i++){
        if(nilai[i]>50){
            cout<<"nama  : "<<nama [i]<<endl;
            cout<<"nilai : "<<nilai[i]<<endl<<endl;
        }
    }

    cout<<"-------- DAFTAR NILAI TIDAK LULUS --------\n";
    for(int i=0 ; i<n ; i++){
        if(nilai[i]<=50){
            cout<<"nama  : "<<nama [i]<<endl;
            cout<<"nilai : "<<nilai[i]<<endl<<endl;
        }
    }

}
