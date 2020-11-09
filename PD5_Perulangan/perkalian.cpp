# include <iostream>
using namespace std;

main ()
{
        int a,b,c=1;
    cout<<"Masukkan banyak data : ";
    cin >> a;
    for(int z=1; z<=a; z++){
        cout<<"Masukkan Bil ("<<z<<")"<<" = ";
        cin >> b;
        c = c*b;
    }
    cout<<"Hasil Perkaliannya : "<<c<<endl;
    }


