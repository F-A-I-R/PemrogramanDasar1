#include<iostream>
using namespace std;
int main(){
    int n,x,nilai,arr[100],temp;
    cout << "==============================================\n";
    cout << "==========        DESCENDING        ==========\n";
    cout << "==========           SORT           ==========\n";
    cout << "==============================================\n";
    cout << "Masukkan banyak data : ";
    cin >> n;

    for(int i=0; i<n ; i++){
        x = n+(i+1-n);                      // menampilkan data ke-
        cout << "[+] Data ke-" << x << " : ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){                 // for loop sort 12345 => 54321
        for(int j=0; j<n; j++){
            if(arr[j] < arr[j+1]){          // cari yg nilainya lebih kecil
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << " Hasil Sorting : \n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

/*  Misal
    int a,b,c;
    a=6;
    b=1;
    c = a;
    a = b;
    b = c;
    cout << a << b <<endl;
*/

    return 0;
}
