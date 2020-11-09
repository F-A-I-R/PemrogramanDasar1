#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username,password,username_login, password_login;
    cout << "======== [ Sign Up / Mendaftar Akun] ========\n";
    cout << "Masukkan Username : ";
    cin  >> username;
    cout << "Masukkan Password : ";
    cin  >> password;
    cout << "\n =====[ Akun anda berhasil didaftarkan ]=====\n";

    cout << "\n\n======== [ Login ] ========\n";
    cout << "Username : ";
    cin  >> username_login;
    cout << "Password : ";
    cin  >> password_login;

    if (username_login == username && password_login == password)
        cout << "\n======== [ Username dan password yang anda masukkan BENAR ] ========\n";
    if (username_login != username && password_login != password){
        cout << "\n======== [ !!! Anda SALAH memasukkan username dan password !!! ] ========\n";
    }else if (username_login != username){
        cout << "\n======== [ !!! Username yang anda masukan SALAH !!! ] ========\n ";
    }else if (password_login != password){
        cout << "\n======== [ !!! Password yang anda masukkan SALAH !!! ] ========\n";
        }

    return 0;
}
