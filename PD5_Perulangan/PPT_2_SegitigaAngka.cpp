#include <iostream>
using namespace std;
int main(){
int n,i,j;
char lagi='y';
while(lagi == 'y'){
cout<<"Masukkan angka : ";
cin >> n;
for(i=n; i>0 ; i--, n--){
    for(j=1 ; j<=n ; j++)
    cout<<n;
    cout<<endl;
    }
cout<<"Mau lagi (y/n) ? ";
cin >> lagi;
}
cout<<"Terima kasih";

}