#include <iostream>
using namespace std;
    
    /*  Nama  = Bagas Ahmad Sadewa
        Nim   = 20051204016
        Kelas = TIB 2020
    */

int main(){
int i, n, a[50];
cout<<"=====================================\n";
cout<<"-- Program Pencari Deret Fibonacci --\n";
cout<<"=====================================\n\n";
cout<<"  Masukkan Batas Deret : ";                //menginputkan deret ke n
cin>>n;

for(i=0; i<n; i++){                               //Looping deret fibonaci 0 1 1 2 3 5 dst
    if(i==0)
        a[i]=0;
    else if(i<=2)
        a[i]=1;
    else
        a[i]=a[i-2]+a[i-1];
    }
cout<<endl;
for (i=0; i<n; i++){                              //Menampilkan deret fibonaci
    cout<<"  "<<a[i];
}
cout<<"\n\n  Deret ke "<<n<<" : "<<a[n-1]<<"\n\n";  //menampilkan deret ke n dan bil. fibonacci

}
