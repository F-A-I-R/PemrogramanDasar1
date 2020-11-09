#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int n=120;
    a=a+2;
    for(int i=a;i<n;i++){
        if(i%2==1)
        cout<<"  ";
        else if(i%2==0)
        cout<<i;
    }



}
