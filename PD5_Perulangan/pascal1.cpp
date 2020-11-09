#include<iostream>
using namespace std;
int main(){
int n,co;
cout<<"masukkan batas: ";
cin >> n;
    for(int i=0;i<n;i+=2)
    {
        for(int j=0;j<((n-i)-1);j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            if(j==0 || i==0)
                co = 1;
            else
                co=co*(i-j+1)/j;
            cout<< co <<"   ";   
        }
        cout<<endl;
    }

}