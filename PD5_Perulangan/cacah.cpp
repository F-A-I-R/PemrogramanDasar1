#include <iostream>
using namespace std;
int main(){
    int n,i,fn,fn1,fn2;
    cout<<"Bilangan Fibonacci\n";
    cout<<"Masukkan nilai ke-n : ";
    cin >> n;
    
    fn1=0;
    fn2=1;
    fn = fn1+fn2;
    for(i=0 ; i<n ; i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout<< fn<<"  ";  
    }





}