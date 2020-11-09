#include <iostream>
using namespace std;

int main()
{
    float a;

    cout<< "====[ Keterangan IPK ]====\n\n";
    cout<< "Masukkan nilai IPK : ";
    cin >> a;
    cout<< "Nilai anda "<<a<< ", maka nilai dinyatakan ";
    if (a>=0 && a<1)
        cout<< "tidak lulus";
    else if (a>=1 && a<2)
        cout<< "mengulang";
    else if (a>=2 && a<3)
        cout<< "baik";
    else if (a>=3 && a<3.5)
        cout<< "sangat baik";
    else if (a>=3.5 && a<=4)
        cout<<"sempurna";
    else
        cout<< "Salah memasukkan nilai IPK karena range nya 0,00 - 4,00";


}
