#include<iostream>
#include<string>
using namespace std;
void garis(){
    for(int i=0; i<41; i++){
        cout << "=";
    }
    cout << endl;
}
int konversiJam(int jam, int menit, int detik){
    int hasilDetik = jam*3600 + menit*60 + detik;
    return hasilDetik;
}
void konversiDetik(int d){
    int jam,menit,detik,sisa;
    jam = d/3600;
    sisa = d%3600;
    menit = sisa/60;
    detik = sisa%60;
    cout << " Hasil Konversi : " << jam << " jam " << menit << " menit " << detik << " detik\n";
}
int factorial(int angka){
    int fac = 1;
    for(int i=1; i<=angka; i++){
        fac = fac*i;
    }
    return fac;
}
void Statistika(){
    int banyak[100],n;
    float nilai[100], jml=0, temp, median, average;
    cout << "---]    Statistika    [---\n";
    cout << "Jumlah data : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Data ke-" << i+1 << " : " ; cin >> nilai[i];
        jml = jml + nilai[i];
    }

    //mengurutkan data
    for(int i=0; i<n; i++){             // 54321 ==> 12345
        for(int j=0; j<n-i-1; j++){
            if(nilai[j] > nilai[j+1]){
                temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }

    cout << " Ascending sort  : ";
    for(int i=0; i<n; i++){
        cout << nilai[i] << "  ";
    }
    // median
    if(n%2 == 0){
        median = (nilai[(n/2)] + nilai[(n/2)-1]) / 2;
    }else{
        median = nilai[(n/2)];
    }
    // rata-rata
    average = jml/n;
    cout << endl;
    cout << " Nilai terendah  : " << nilai[0] << endl;
    cout << " Nilai tertinggi : " << nilai[n-1] << endl;
    cout << " Median          : " << median << endl;
    cout << " Rata - rata     : " << average << endl;
    cout << " Total nilai     : " << jml << endl;
}
int main(){
    garis();
    cout << "==]      UAS PEMROGRAMAN DASAR      [==\n";
    garis();

    // Sign up & Login
    string username, psw, userLog, pswLog;
    cout << "=============]  Sign Up  [=============\n";
    cout << " Username : ";
    cin >> username;
    cout << " Password : ";
    cin >> psw;
    cout << "---------]  Sign up berhasil  [--------\n";
    system("cls");
    int i=0;
    bool login = false;
    do{
        cout << "=============]  Log In  [==============\n";
        cout << " Username : ";
        cin >> userLog;
        cout << " Password : ";
        cin >> pswLog;
        if(userLog == username && pswLog == psw){
            cout << "\n Selamat " << username << " berhasil login\n";
            i = 4;
            login = true;
        }else{
            cout << " Username dan Password salah \n\n";
            i++;
        }
    }while(i<3);
    if(login == false){
        cout << "\n[x] Akun di blokir - Log In sudah 3x salah [x]\n";
        return 0;
    }
    
    system("cls");
    int jam, menit, detik, d, sisa;
    cout << "=====]   KONVERSI JAM KE DETIK   [=====\n";
    cout << " Masukkan Jam   : ";
    cin >> jam;
    cout << " Masukkan Menit : ";
    cin >> menit;
    cout << " Masukkan Detik : ";
    cin >> detik;
    cout << " Hasil Konversi : " << konversiJam(jam,menit,detik) << " detik" << endl;
    
    cout << "=====]   KONVERSI DETIK KE JAM   [=====\n";
    cout << " Masukkan Detik : ";
    cin >> d;
    konversiDetik(d);
    
    cout << "----------]    Factorial    [----------\n";
    int angka;
    cout << "Factorial dari : ";
    cin >> angka;
    cout << "Hasil faktorial dari " << angka << " yaitu " << factorial(angka);

    Statistika();
}