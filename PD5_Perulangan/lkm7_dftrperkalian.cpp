#include<iostream>
using namespace std;
int main(){
    int n=10,a;
    for(int i=1; i<=n; i++){
        if(i==1)
            cout<<" ";
        else
        {
            cout<<i;
        }
        
        for(int j=1; j<=n; j++){
            a=j*i;
            cout<<" "<<a;
        }
        cout<<endl;
    }

}