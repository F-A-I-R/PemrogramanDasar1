#include <iostream>
#include <cstring>
#include <stdio.h>  

using namespace std;
int main(){
    cout << " ======]           LKM 11          [======\n";
    cout << " ======]     String dan Fungsi     [======\n\n";
    char text[50];
    int jml;
    cout << "Masukkan text   : ";
    gets(text);
    cout << "Text yg diinput : " << text << endl;
    cout << "Text dibalik    : " << strrev(text) << endl;
    jml = strlen(text);
    cout << "Jumlah karakter : " << jml << " karakter" << endl;

}