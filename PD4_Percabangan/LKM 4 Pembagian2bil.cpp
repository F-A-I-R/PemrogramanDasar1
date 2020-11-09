#include <iostream>
using namespace std;

int main()
{
    cout<< "=======[ PEMBAGIAN 2 BILANGAN INTEGER ]=======\n";
    int bil1,bil2,hasil;
    cout<< "Masukkan bilangan pertama : ";
    cin >> bil1;
    cout<< "Masukkan bilangan kedua   : ";
    cin >> bil2;


    if(bil2 == 0){
        cout << "tidak dapat dibagi nol jika bilangan yang kedua sama dengan nol\n";
    }else{
        hasil = bil1/bil2;
        cout<< bil1 << '/' << bil2 <<'=' << hasil;
    }

    return 0;
}
