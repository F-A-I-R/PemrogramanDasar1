#include <iostream>
using namespace std;

int main()
{
    cout << "=================================================\n";
    cout << "=== Menampilkan kata dari angka yg dimasukkan ===\n";
    cout << "=================================================\n";

    int a; //a = angka
    cout << "Masukkan 1 angka : ";
    cin  >> a;

    if(a == 1){
        cout << "SATU";
    }else if(a == 2){
        cout << "DUA";
    }else if(a == 3){
        cout << "TIGA";
    }else if(a == 4){
        cout << "EMPAT";
    }else if(a == 5){
        cout << "LIMA";
    }else if(a == 6){
        cout << "ENAM";
    }else if(a == 7){
        cout << "TUJUH";
    }else if(a == 8){
        cout << "DELAPAN";
    }else if(a == 9){
        cout << "SEMBILAN";
    }else if(a >= 10){
        cout << "Bilangan yg anda masukkan lebih dari 1 digit";
    }else if(a < 0){
        cout << "Bilangan yg anda masukkan kurang dari 1";
    }else{
        cout << "Anda memasukkan huruf, seharusnya ANGKA 1-9";
    }
}
