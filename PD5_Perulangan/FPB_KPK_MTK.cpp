#include<iostream>
using namespace std;
int main(){
    int menu;
    char lagi='m', l='l';
    while(lagi='m'){
    cout<<"---- Perhitungan Matematika ----\n";
    cout<<"1. Perpangkatan\n";
    cout<<"2. Perkalian\n";
    cout<<"3. FPB\n";
    cout<<"4. KPK\n";
    cout<<"--------------------------------\n";
    cout<<"Pilih menu : ";
    cin >> menu;
    switch(menu){

        case 1: {
            while(l=='y'){
            cout<<"--- Perpangkatan ---\n";
            int b=1,bil,pangkat;
            cout<<"masukkan bil yg akan dipangkatkan : ";
            cin >> bil;
            cout<<"masukkan pangkatnya : ";
            cin >> pangkat;
            for(int i=0;i<pangkat;i++){
                b=b*bil;
            }
            cout<<"Hasil : "<<b<<endl;
            cout<<"hitung pangkat lagi(y) ke menu(m) = ";
             cin >>lagi||l;
             break;
        }

        }


        case 2:{
            cout<<"--- Perkalian ---\n";
            int n,bp,p=1;
            cout<<"Ingin mengalikan berapa bilangan : ";
            cin >> n;
            for(int i=1; i<=n ; i++){
                cout<<"[+] Masukkan bilangan ke-"<<i<<" : ";
                cin >> bp;
                p = p * bp;
            }
            cout<<"Hasil : "<<p<<endl;
        break;
        }
        case 3:{
            int bil1,bil2,i,a;
            cout<<"--- FPB ---\n";
            cout<<"Masukan Bilangan 1 :";cin>>bil1;
            cout<<"Masukan Bilangan 2 :";cin>>bil2;
            cout<<"Nilai Faktor Persekutuan   : \n";
            cout<<"{ ";
            for (i=1; i<=bil1; i++){
                  if (bil1%i==0 && bil2%i==0){
                        a=i;
                        cout<<i<<" ";
                  }
            }
            cout<<"}\n";
            cout<<"Nilai FPB     : "<<a<<"\n\n";
        }
        case 4:{
            int b1,b2,kpk,min,max;
            cout<<"--- KPK ---\n";
            cout<<"Masukkan Bilangan 1: ";
            cin >> b1;
            cout<<"Masukkan Bilangan 2: ";
            cin >> b2;
            if(b1>b2){
                min=b2;
            }else if(b1<b2){
                min=b1;
            }
            kpk=0;
            for(int i=1; i<=min; i++){
                kpk=kpk+b1;
                if(kpk%b2 == 0){
                    kpk;
                    max=i;
                    break;
                }
            }

            int k1=0;
            cout<<"Kelipatan "<<b1<<" = { ";
            for(int i=1; i<=max ;i++){
                k1=k1+b1;
                cout<<k1<<" ";
            }
            cout<<" }\n";

            int k2=0;
            cout<<"Kelipatan "<<b2<<" = { ";
            for(int i=1; i<=max; i++){
                k2=k2+b2;
                cout<<k2<<" ";
            }
            cout<<" }\n";

            cout<<"KPK dari "<<b1<<" dan "<<b2<<" = "<<kpk;



        }
    }
    cout<<"Kembali menu tekan'm' = ";
    cin >>lagi;
    }



}
