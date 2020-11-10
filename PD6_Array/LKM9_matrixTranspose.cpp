#include <iostream>
#include <array>
#define x 3
using namespace std;
int main(){
    cout<<"------------------------------------------------\n";
    cout<<"------ Mentranpose & Menjumlah Matrix 3x3 ------\n";
    cout<<"------------------------------------------------\n";
    int A[x][x]={0}, B[x][x]={0}, C[x][x]={0};
    //input dari user element matrix
    for(int i=0 ; i<x ; i++){
        for(int j=0 ; j<x ; j++){ 
            cout<<"Inputkan element ["<<i+1<<","<<j+1<<"] :";
            cin>> A[i][j];
            B[i][j] = A[i][j];
        }
    }
    //menampilkan element yg telah diinputkan dengan tampilan matrix 3x3
    cout<<"Matrix yang anda inputkan : \n";
    for(int i=0 ; i<x ; i++){
        cout<<"|";
        for(int j=0 ; j<x ; j++){
            cout<< " " << A[i][j];
        }
        cout <<" |";
        cout<<endl;
    }
    //mentranpose matrix atau kolom jadi baris,baris jadi kolom
    cout<<"Matrix Transpose : \n";
    for(int i=0 ; i<x ; i++){
        cout<<"|";
        for(int j=0 ; j<x ; j++){
            cout<< " " << B[j][i];
        }
        cout <<" |";
        cout<<endl;
    }
    //Matrix A dan B dijumlahkan
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
