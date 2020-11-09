#include<iostream>
using namespace std;
int main(){
    float total_n,hasil,n;
    char lagi='y';
    while(lagi == 'y'){
    cout<<"----------------------------------\n";
    cout<<"-  PROGRAM MENGHITUNG f(n)=2(n)  -\n";
    cout<<"----------------------------------\n";
    cout<<"Menghitung berapa kali : ";
    cin >> total_n;
    for(int i=1 ; i<= total_n ; i++){
        cout<<'['<<i<<"] Masukkan bilangan  : ";
        cin >> n;
        hasil=2*n;
        cout<<"--->  Hasil = 2("<<n<<") =  "<<hasil;
        cout<<"\n\n";
    }
    cout<<"Ingin menghitung lagi (y/n)? ";
    cin >>lagi;
    cout<<endl;
    }
    cout<<"      ----- Terimakasih -----\n\n";
}
