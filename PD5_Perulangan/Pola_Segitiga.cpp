#include <iostream>
using namespace std;
int main()
{
  int i , j , k, n ;
  cout<<"SEGITIGA GENAP \n";
  cout<<"Masukan tinggi segitiga : ";
  cin>>n;
 for(i=n ; i>=0 ; i--){
  for(j=i ; j>=0 ; j--){
   cout<< " ";
  }
  for(k=1 ; k<=(n-i)*2 ; k++){
   cout<< "*";
  }k--;
  cout<<"         -> " << k;
  cout<<endl;
  }
}
