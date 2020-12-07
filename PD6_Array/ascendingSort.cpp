#include <iostream>
using namespace std;
int main(){
    cout << "=======================================\n";
    cout << "========      Ascending Sort    =======\n";
    cout << "=======================================\n";

    int n, x, arr[100], temp;
    cout << "Masukkan banyak data : ";
    cin >> n;

    for(int i=0; i<n; i++){
        x = n+(i+1-n);
        cout << "[+] Data ke-" << x << " : ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){             // 54321 ==> 12345
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << " Hasil Ascending sort : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}