#include<iostream>
using namespace std;
int main(){
    int n ;
    float nilai,max,min,jml,average;
    char lagi='y';
    while(lagi == 'y'){
    cout<<"============================\n";
    cout<<"------   STATISTIKA   ------\n";
    cout<<"============================\n";
    cout<<" Masukkan banyak data : ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout<<"[+] Input bil ke "<<i<<" = ";
        cin >> nilai;
        cout<<endl;
        if(i==1){
            max = nilai;
            min = nilai;   
        }else if(nilai<min){
            min = nilai;
        }else if(nilai>max){
            max = nilai;
        }
        jml=jml+nilai;
    }
    average=jml/n;
    cout<<"---- HASIL PERHITUNGAN ----\n";
    cout<<"Nilai Max     : "<<max<<endl;
    cout<<"Nilai Min     : "<<min<<endl;
    cout<<"Nilai average : "<<average<<endl;
    cout<<"Total         : "<<jml<<"\n\n";
    cout<<"Ingin menghitung lagi (y/n)? ";
    cin >>lagi;
    cout<<endl;
    }


}