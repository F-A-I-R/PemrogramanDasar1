#include<iostream>
using namespace std;
int main(){
    int n,menu;
    char lagi='y';
    while(lagi=='y'){
    cout<<"-----------------------------\n";
    cout<<"        POLA SEGITIGA\n";
    cout<<"-----------------------------\n";
    cout<<"1. Pola Gasal\n";
    cout<<"2. Pola Genap\n";
    cout<<"3. Pola Pascal\n";
    cout<<"Ingin menampilkan pola apa? \n";
    cin>>menu;
    switch(menu){
        case 1:
        cout<<"--- Pola Gasal ---\n";
        cout<<"Masukkan tinggi segitiga: ";
        cin>> n;
        for(int i=1; i<=n; i++){//menurun
            for(int j=n; j>i;j--){//spasi pembntuk sg3
            cout<<" ";
            }
            for(int k=1; k<= (2*i-1);k++){//isian perbaris
            cout<<"*";
            }
        cout<<endl;
        }
        break;

        case 2:
        cout<<"--- Pola Genap ---\n";
        cout<<"Masukkan tinggi segitiga: ";
        cin>>n;
        for(int i=1; i<=n; i++){//menurun
            for(int j=n; j>i;j--){//spasi pembentuk sg3
                cout<<" ";
            }
            for(int k=1; k<=(2*i);k++){
                cout<<"*";
            }
            cout<<endl;
        }
        break;

        case 3:
        cout<<"--- Pola Pascal ---\n";
        cout<<"Masukkan tinggi segitiga: ";
        cin>>n;
        for(int i=0; i<n; i++){//menurun
            int a=1;
            for(int j=1; j<(n-i); j++){//spasi pembentuk sg3
                cout<<"  ";
            }
            for(int k=0; k<=i; k++){//perulangan sebanyak i kesamping
                cout<<"   "<<a;
                a=a*(i-k)/(k+1);
            }
            cout<<endl<<endl;
        }
        cout<<endl;
        break;
    }
    cout<<"Kembali ke MENU (y/n) ? ";
    cin>>lagi;
    }

}