#include<iostream>
using namespace std;
    
    /*  Nama  = Bagas Ahmad Sadewa
        Nim   = 20051204016
        Kelas = TIB 2020
    */
   
int main(){
    int n;
    cout<<"---- Latihan Menginputkan Variabel ke Array ----\n";
    cout <<"Ingin menginputkan berapa variabel : ";
    cin >> n;
    int arr[n]={0};
    for(int i=0 ; i<n ; i++){
        cout <<"Input variabel ke-"<<i<<" : ";
        cin >> arr[i];
    }
    cout<<"---- Variabel yang telah diinputkan ----\n";
    for(int i=0 ; i<n ; i++){
        cout <<"Variabel ke-"<<i<<" : ";
        cout << arr[i]<<endl;
    }
}