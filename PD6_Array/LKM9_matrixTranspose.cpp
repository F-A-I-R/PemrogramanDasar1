#include <iostream>

    /*  Nama  = Bagas Ahmad Sadewa
        Nim   = 20051204016
        Kelas = TIB 2020
    */

using namespace std;
int main(){
    cout<<"------------------------------------------------\n";
    cout<<"------ Mentranpose & Menjumlah Matrix 3x3 ------\n";
    cout<<"------------------------------------------------\n";
    const int x=3; 
    int A[x][x]={0}, B[x][x]={0}, C[x][x]={0};
    for(int i=0 ; i<x ; i++){
        for(int j=0 ; j<x ; j++){ 
            cout<<"Inputkan element ["<<i+1<<","<<j+1<<"] :";
            cin>> A[i][j];
            B[i][j] = A[i][j];
        }
    }
    cout<<"Matrix yang anda inputkan : \n";
    for(int i=0 ; i<x ; i++){
        cout<<"|";
        for(int j=0 ; j<x ; j++){
            cout<< " " << A[i][j];
        }
        cout <<" |";
        cout<<endl;
    }
    cout<<"Matrix Transpose : \n";
    for(int i=0 ; i<x ; i++){
        cout<<"|";
        for(int j=0 ; j<x ; j++){
            cout<< " " << A[j][i];
        }
        cout <<" |";
        cout<<endl;
    }
    cout<<"Hasil Penjumlahan Matrix :\n";
    for(int i=0 ; i<x ; i++){
        cout<<"|";
        for(int j=0 ; j<x ; j++){
            C[i][j] = A[j][i] + B[i][j];
            cout << " "<<C[i][j];
        }
        cout <<" |";
        cout<<endl;
    }
    
}
