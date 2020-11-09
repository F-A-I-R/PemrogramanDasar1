#include <iostream>
using namespace std;
int main(){
    cout<<"================================\n";
    cout<<"         Deret Bilangan         \n";
    cout<<"================================\n";

    //deklarasi var
    int i,n,n1,pilih;
    char lagi='y';

    //looping jika ingin lagi
    while(lagi=='y'){
    //pilihan menu
    cout<<"1. Bilangan Cacah\n";
    cout<<"2. Bilangan Genap\n";
    cout<<"3. Bilangan Gasal\n";
    cout<<"4. Bilangan Fibonacci\n";
    cout<<"--------------------------------\n";
    cout<<"Pilih Nomor Berapa : ";
    cin >>pilih;
    switch(pilih){
    case 1:
        cout<<"[+] Bilang Cacah [+]\n";
        cout<<"Bilangan diwali dari ";
        cin >> n;
        cout<<"sampai ";
        cin >> n1;
        for(i=n ; i<n1 ; i++){
        cout<< i<<"   ";
        }cout<<endl;
    break;

    case 2:
        cout<<"[+] Bilangan Genap [+]\n";
        cout<<"Bilangan diawali dari ";
        cin >> n;
        cout<<" sampai ";
        cin >> n1;    
        for(i=n+1 ; i<=n1 ; i++){
        if(i %2 == 0)
        cout<< i<<"   ";
    }cout<<endl;
    break;

    case 3:
        cout<<"[+] Bilangan Gasal [+]\n";
        cout<<"Bilangan diawali dari ";
        cin >> n;
        cout<<" sampai ";
        cin >> n1;    
        for(i=n ; i<=n1 ; i++){
        if(i %2 == 1)
        cout<< i<<"   ";
        }
        cout<<endl;
    break;

    case 4:
        int n,i,fn,fn1,fn2;
        cout<<"[+] Bilangan Fibonacci [+]\n";
        cout<<"Masukkan nilai ke-n : ";
        cin >> n;
        fn1=0;
        fn2=1;
        fn = fn1+fn2;
        for(i=0 ; i<n ; i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout<< fn<<"  ";  
    }cout<<endl;
    break;
    default:
        cout <<"inputan anda salah";
        break;
    }
    cout<<"Ingin Lagi (y/n) ? ";
    cin >> lagi;
    cout<<"--------------------------------\n";
    }
    cout<<"Thank You";

}