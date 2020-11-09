#include<iostream>
using namespace std;
int main(){
        int n;
    cout << "Masukkan batasan baris : ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)//menurun
    {
        int a = 1;
        for (int j = 1; j < (n - i); j++) //memberi spasi agar menjadi sg3
        {
            cout << "..";
        }
        for (int k = 0; k <= i; k++)//kesamping
        {
            cout << "---" << a;
            a = a * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}
