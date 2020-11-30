#include <iostream>
#include <cstring>
#include <stdio.h> 
using namespace std;
int main(){
    int jml;
    char kata1[50];
    cout << "Masukkan text : ";
    gets(kata1);
    char kata2[50];
    //menyalin string dengan fungsi strcpy(destination,source);
    strcpy(kata2,kata1);                    
    cout << "Text asli  : " << kata1 <<endl;
    cout << "Hasil copy : " << kata2 <<endl;

}